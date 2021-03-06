/*
 * PicRes - GUI program to resize pictures in an easy way
 * Copyright (C) 2020 Martial Demolins AKA Folco
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * mail: martial <dot> demolins <at> gmail <dot> com
 */

#include "DropThread.hpp"
#include "MainWindow.hpp"
#include "ResizeThread.hpp"
#include <QApplication>

//
//  main
//
// Create the MainWindow, show it and execute it
//

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w(argc, argv); // Handle files dropped on the program icon (or passed from CLI)
    w.show();
    int ret = a.exec();
    delete DropThread::instance();
    delete ResizeThread::instance();
    return ret;
}
