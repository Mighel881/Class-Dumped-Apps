//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface GWAInputCharacter : NSObject
{
    unsigned long long _location;
    NSRegularExpression *_regex;
    NSString *_displayCharacter;
}

@property(copy, nonatomic) NSString *displayCharacter; // @synthesize displayCharacter=_displayCharacter;
@property(retain, nonatomic) NSRegularExpression *regex; // @synthesize regex=_regex;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
- (void).cxx_destruct;

@end
