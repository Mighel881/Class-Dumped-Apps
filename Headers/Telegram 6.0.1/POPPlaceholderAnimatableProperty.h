//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/POPAnimatableProperty.h>

@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)name;
- (void).cxx_destruct;

@end
