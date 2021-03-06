/*
 * UI.h
 *
 * Created: 09/01/2015 03:38:24
 *  Author: mat
 */ 

#pragma once

struct UI
{
        /**
         * Initialize the UI components.
         */
	static uint8_t init();	
        
        /**
         * Display the startup page and retrieve how long the startup page should be displayed 
         * for in milliseconds before moving on to the main page.
         */         
        static uint32_t showStartupPage();
        
        /**
         * Show the main controller page. 
         */
        static void showControllerPage();
	
        /**
         * Called from the main loop to update the current page and perform event
         * processing.
         */
	static void update();
	
};