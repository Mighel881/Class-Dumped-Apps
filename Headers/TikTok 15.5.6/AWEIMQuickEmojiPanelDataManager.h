//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AWEIMQuickEmojiPanelDataManager : NSObject
{
    NSArray *_dataList;
}

@property(readonly, copy, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)resetEmojiPanelEntrance;
- (void)recordEmojiUsed:(id)arg1;
- (id)init;

@end
