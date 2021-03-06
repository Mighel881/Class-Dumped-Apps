//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSObject, NSString;
@protocol DBLocalizedDisplayTextConforming, DBObserverHandleProtocol;

@interface DBLocalizedDisplayTextObservingLabel : UILabel
{
    NSObject<DBLocalizedDisplayTextConforming> *_displayTextConformingObject;
    id <DBObserverHandleProtocol> _observerHandle;
    NSString *_subtitleSeparatorString;
    NSString *_staticText;
}

@property(copy, nonatomic) NSString *staticText; // @synthesize staticText=_staticText;
- (void).cxx_destruct;
- (void)db_updateWithProgressText:(id)arg1;
- (void)observeDisplayTextAndAppendToText:(id)arg1;
- (id)initWithSubtitleSeparatorString:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

