//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class MessageSet, NSString;

@interface OrchSeparator : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasPrivateExtensions; // @dynamic hasPrivateExtensions;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) MessageSet *privateExtensions; // @dynamic privateExtensions;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
