/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTUIKit.h> // TODO(macOS ISS#2323203)

#if !TARGET_OS_OSX // TODO(macOS ISS#2323203)
@interface RCTDatePicker : UIDatePicker
#else // [TODO(macOS ISS#2323203)
@interface RCTDatePicker : NSDatePicker
#endif // ]TODO(macOS ISS#2323203)

@end
