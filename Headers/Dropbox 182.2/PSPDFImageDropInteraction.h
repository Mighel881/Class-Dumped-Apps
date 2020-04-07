//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDropInteraction.h>

#import <PSPDFKitUI/UIDropInteractionDelegate-Protocol.h>

@class NSString;
@protocol PSPDFImageDropInteractionDelegate;

@interface PSPDFImageDropInteraction : UIDropInteraction <UIDropInteractionDelegate>
{
    id <PSPDFImageDropInteractionDelegate> _realDelegate;
}

@property(nonatomic) __weak id <PSPDFImageDropInteractionDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
