/* Copyright (c) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeLiveBroadcast.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeLiveBroadcast (0 custom class methods, 7 custom properties)
//   GTLYouTubeLiveBroadcastSlateSettings (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeLiveBroadcastContentDetails;
@class GTLYouTubeLiveBroadcastSlateSettings;
@class GTLYouTubeLiveBroadcastSnippet;
@class GTLYouTubeLiveBroadcastStatus;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLiveBroadcast
//

// A liveBroadcast resource represents an event that will be streamed, via live
// video, on YouTube.

@interface GTLYouTubeLiveBroadcast : GTLObject

// The contentDetails object contains information about the event's video
// content, such as whether the content can be shown in an embedded video player
// or if it will be archived and therefore available for viewing after the event
// has concluded.
@property (retain) GTLYouTubeLiveBroadcastContentDetails *contentDetails;

// The ETag of the broadcast.
@property (copy) NSString *ETag;

// The ID that YouTube assigns to uniquely identify the broadcast.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The type of the API resource. For live broadcast resources, the value will be
// youtube#liveBroadcast.
@property (copy) NSString *kind;

// The slateSettings object contains details about the content that will display
// in the player when you show a broadcast slate. A broadcast slate displays
// above the video. However, while it displays, the video continues to play and
// is also audible in the background.
@property (retain) GTLYouTubeLiveBroadcastSlateSettings *slateSettings;

// The snippet object contains basic details about the event, including its
// title, description, start time, and end time.
@property (retain) GTLYouTubeLiveBroadcastSnippet *snippet;

// The status object contains information about the event's status.
@property (retain) GTLYouTubeLiveBroadcastStatus *status;

@end


// ----------------------------------------------------------------------------
//
//   GTLYouTubeLiveBroadcastSlateSettings
//

@interface GTLYouTubeLiveBroadcastSlateSettings : GTLObject
@end
