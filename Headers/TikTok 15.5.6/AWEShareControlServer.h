//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeACLItem, AWEAwemeModel, NSMutableDictionary, NSString;

@interface AWEShareControlServer : NSObject
{
    AWEAwemeACLItem *_downloadStruct;
    AWEAwemeModel *_model;
    NSMutableDictionary *_downloadStructDict;
    unsigned long long _currentPanel;
    NSString *_enterFrom;
}

+ (id)sharedServer;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) unsigned long long currentPanel; // @synthesize currentPanel=_currentPanel;
@property(retain, nonatomic) NSMutableDictionary *downloadStructDict; // @synthesize downloadStructDict=_downloadStructDict;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEAwemeACLItem *downloadStruct; // @synthesize downloadStruct=_downloadStruct;
- (void).cxx_destruct;
- (id)p_trackKeyWithPanelType:(unsigned long long)arg1;
- (id)p_keyWithPanelType:(unsigned long long)arg1;
- (id)p_downloadStructWithPanelType:(unsigned long long)arg1;
- (void)p_checkDiff;
- (void)endContext;
- (void)startContextWithPanelType:(unsigned long long)arg1 aweme:(id)arg2 enterFrom:(id)arg3;

@end
