//
//  TestRssItem.h
//  RssKit
//
//  Created by Paul Hoehne on 12/26/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

//  Logic unit tests contain unit test code that is designed to be linked into an independent test executable.
//  See Also: http://developer.apple.com/iphone/library/documentation/Xcode/Conceptual/iphone_development/135-Unit_Testing_Applications/unit_testing_applications.html

#import <SenTestingKit/SenTestingKit.h>

@class RssItem;
@class RssChannel;

@interface TestRssItem : SenTestCase {
    RssItem* item;
    RssChannel* channel;
}
@end
