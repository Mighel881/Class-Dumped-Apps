//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCI18NConfigProtocol-Protocol.h"

@class NSBundle, NSString;

@interface ACCI18NConfigImpl : NSObject <ACCI18NConfigProtocol>
{
    NSString *_currentLanguage;
    NSString *_currentRegion;
}

@property(copy, nonatomic) NSString *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *defaultLanguage;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSBundle *languageBundle;
@property(readonly) Class superclass;

@end

