//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ALPStringLocalizationInfo : NSObject
{
    NSString *_key;
    NSString *_locale;
    NSArray *_pluralParams;
}

@property(retain, nonatomic) NSArray *pluralParams; // @synthesize pluralParams=_pluralParams;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 locale:(id)arg2;
- (id)initWithKey:(id)arg1 locale:(id)arg2 pluralParams:(id)arg3;

@end

