//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIAgentAccountLinkingConfig, NSString;

@interface ASTUICarSettingsUiUpdate_AgentLinkAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTUIAgentAccountLinkingConfig *agentConfig; // @dynamic agentConfig;
@property(copy, nonatomic) NSString *agentId; // @dynamic agentId;
@property(nonatomic) long long agentProjectGaiaId; // @dynamic agentProjectGaiaId;
@property(nonatomic) _Bool hasAgentConfig; // @dynamic hasAgentConfig;
@property(nonatomic) _Bool hasAgentId; // @dynamic hasAgentId;
@property(nonatomic) _Bool hasAgentProjectGaiaId; // @dynamic hasAgentProjectGaiaId;

@end

