//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBWebSaverLinkElement : NSObject
{
    NSString *_href;
    struct CGRect _frame;
}

+ (id)linkElementFromString:(id)arg1;
+ (id)linkSeperator;
@property(readonly, copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 href:(id)arg2;

@end
