//
//  HNComment+AttributedStrings.h
//  HackerNewsReader
//
//  Created by Ryan Nystrom on 4/12/15.
//  Copyright (c) 2015 Ryan Nystrom. All rights reserved.
//

#import <HackerNewsKit/HNComment.h>

extern NSString * const HNCommentLinkAttributeName;

@interface HNComment (AttributedStrings)

- (NSAttributedString *)attributedString;

@end
