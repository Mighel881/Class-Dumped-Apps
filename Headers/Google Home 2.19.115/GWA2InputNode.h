//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWA2Node.h"

@class GWA2MDCTextField, MDCTextInputControllerBase;

@interface GWA2InputNode : GWA2Node
{
    MDCTextInputControllerBase *_inputController;
    GWA2MDCTextField *_inputField;
}

@property(retain, nonatomic) MDCTextInputControllerBase *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) GWA2MDCTextField *inputField; // @synthesize inputField=_inputField;
- (void).cxx_destruct;
- (void)inputDataChangedOnErrorTextKeyPath:(id)arg1;
- (void)inputDataChangedOnInputKeyPath:(id)arg1;
- (void)inputFieldUnfocused:(id)arg1;
- (void)inputFieldFocused:(id)arg1;
- (void)inputFieldTextChanged:(id)arg1;
- (void)setupAccessibilityProperties;
- (void)setMaterialType:(unsigned long long)arg1;
- (id)presentedView;
- (void)dealloc;

@end

