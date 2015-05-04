//
//  HNTextStorage.h
//  HackerNewsReader
//
//  Created by Ryan Nystrom on 4/26/15.
//  Copyright (c) 2015 Ryan Nystrom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HNTextStorage : NSObject

- (CGFloat)heightForAttributedString:(NSAttributedString *)attributedString size:(CGSize)size;

- (id)renderedContentForAttributedString:(NSAttributedString *)attributedString size:(CGSize)size;

@end
