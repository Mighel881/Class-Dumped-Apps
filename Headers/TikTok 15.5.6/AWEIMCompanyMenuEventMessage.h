//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class NSString;

@interface AWEIMCompanyMenuEventMessage : AWEIMMessage
{
    NSString *_menuKey;
    NSString *_eventName;
}

@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *menuKey; // @synthesize menuKey=_menuKey;
- (void).cxx_destruct;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

