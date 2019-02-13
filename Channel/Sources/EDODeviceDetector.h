//
// Copyright 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#import <Foundation/Foundation.h>

@class EDODeviceChannel;

NS_ASSUME_NONNULL_BEGIN

/** The class to detect device attachment/detachment events with a handler. */
@interface EDODeviceDetector : NSObject

/** The shared detector instance. */
+ (instancetype)sharedInstance;

/**
 *  Starts listening the broadcast of device events with a callback handler. Returns @YES if
 *  connects to usbmuxd successfully.
 */
- (BOOL)listenWithBroadcastHandler:(void (^)(NSDictionary* _Nullable packet,
                                             NSError* _Nullable error))broadcastHandler;

/** Stops listening the broadcast of device events. */
- (void)cancel;

@end

NS_ASSUME_NONNULL_END