//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface CreateTaskAnchorStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMpURL; // @dynamic hasMpURL;
@property(nonatomic) _Bool hasOpenURL; // @dynamic hasOpenURL;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWebURL; // @dynamic hasWebURL;
@property(retain, nonatomic) UrlStruct *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *mpURL; // @dynamic mpURL;
@property(copy, nonatomic) NSString *openURL; // @dynamic openURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *webURL; // @dynamic webURL;

@end
