//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPickableValue-Protocol.h>

@class NSString, UIImage;

@interface T1SettingsPreferenceItemValue : NSObject <TFNPickableValue>
{
    id _identifier;
    NSString *_valueName;
}

@property(copy, nonatomic) NSString *valueName; // @synthesize valueName=_valueName;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueDetail;
@property(readonly, nonatomic) UIImage *valueIcon;
@property(readonly, copy, nonatomic) NSString *valueShortName;

@end
