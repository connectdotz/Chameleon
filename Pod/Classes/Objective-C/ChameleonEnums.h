//
//  ChameleonEnums.h
//  Chameleon
//
//  Created by Vicc Alexander on 6/8/15.
//  Copyright (c) 2015 Vicc Alexander. All rights reserved.
//

#ifndef Chameleon_ChameleonEnums_h
#define Chameleon_ChameleonEnums_h

#import <Foundation/Foundation.h>

/**
 *  Specifies how text-based UI elements and other content such as switch knobs,
 * should be colored.
 *
 *  @since 2.0
 */

typedef NS_ENUM(NSUInteger, UIContentStyle) {
  /**
   *  Automatically chooses and colors text-based elements with the shade that
   * best contrasts its @c backgroundColor.
   *
   *  @since 2.0
   */
  UIContentStyleContrast,
  /**
   *  Colors text-based elements using a light shade.
   *
   *  @since 2.0
   */
  UIContentStyleLight,
  /**
   *  Colors text-based elements using a light shade.
   *
   *  @since 2.0
   */
  UIContentStyleDark
};

typedef NS_OPTIONS(NSUInteger, UIAppearanceOptions) {
  UIAppearanceOptionsNone = 0,
  UIAppearanceOptionsBarButtonItem = (1 << 0),
  UIAppearanceOptionsButton = (1 << 1),
  UIAppearanceOptionsNavigationBar = (1 << 2),
  UIAppearanceOptionsPageControl = (1 << 3),
  UIAppearanceOptionsProgressView = (1 << 4),
  UIAppearanceOptionsSearchBar = (1 << 5),
  UIAppearanceOptionsSegmentedControl = (1 << 6),
  UIAppearanceOptionsSlider = (1 << 7),
  UIAppearanceOptionsStepper = (1 << 8),
  UIAppearanceOptionsSwitch = (1 << 9),
  UIAppearanceOptionsTabBar = (1 << 10),
  UIAppearanceOptionsToolbar = (1 << 11),
  UIAppearanceOptionsImagePicker = (1 << 12),
  UIAppearanceOptionsLabel = (1 << 13),
  UIAppearanceOptionsAll =
      (UIAppearanceOptionsBarButtonItem | UIAppearanceOptionsButton |
       UIAppearanceOptionsNavigationBar | UIAppearanceOptionsPageControl |
       UIAppearanceOptionsProgressView | UIAppearanceOptionsSearchBar |
       UIAppearanceOptionsSegmentedControl | UIAppearanceOptionsSlider |
       UIAppearanceOptionsStepper | UIAppearanceOptionsSwitch |
       UIAppearanceOptionsTabBar | UIAppearanceOptionsToolbar |
       UIAppearanceOptionsImagePicker | UIAppearanceOptionsLabel)
};
#endif
