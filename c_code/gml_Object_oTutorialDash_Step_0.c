// gml_Object_oTutorialDash_Step_0 @ 0x140df6e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTutorialDash_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong **pplVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffdb0;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_210 = "gml_Object_oTutorialCombat_Step_0";
  local_208 = 0;
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  pplVar5 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_11c = 0xffffff;
  local_128 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_208 = 2;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
  uStack_240 = (ulonglong)(uint)uStack_240;
  local_248 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
  if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 == 0) {
    local_208 = 4;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uStack_240._4_4_ = 6;
    local_248 = local_res8;
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar14 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_78,uVar14,in_stack_fffffffffffffdb0);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_240._4_4_ = 6;
    local_248 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_88,uVar14,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_228 = local_78;
    uStack_220 = CONCAT44(uStack_6c,uStack_70);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_228);
    local_168 = local_1e8;
    local_228 = local_88;
    uStack_220 = CONCAT44(uStack_7c,uStack_80);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_228);
    local_160 = local_1d8;
    uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
    local_228 = 0x1000000000000ee;
    local_248 = (longlong *)0x1000000000000ee;
    uStack_240._0_4_ = (undefined4)uStack_220;
    uStack_240._4_4_ = 0xf;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_248);
    local_158 = local_1c8;
    uVar7 = CONCAT44(uVar12,DAT_141a12628);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,3,uVar7,&local_168);
    uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') goto LAB_140df8c55;
    local_208 = 6;
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_200 = 0;
    local_1f8 = 0;
    local_1f4 = 5;
    uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
    local_228 = 0x1000002000000a9;
    local_248 = (longlong *)0x1000002000000a9;
    uStack_240 = CONCAT44(0xf,(undefined4)uStack_220);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_248);
    local_150 = local_1b8;
    local_228 = CONCAT44(uRam00000001419ee724,_DAT_1419ee720);
    uStack_220 = CONCAT44(uRam00000001419ee72c,uRam00000001419ee728);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_228);
    local_148 = local_1a8;
    local_228 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_220 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_228);
    local_140 = local_198;
    FUN_140e634e0(local_res8,local_res10,&local_200,3,CONCAT44(uVar12,DAT_141a0a2e8),&local_150);
    local_208 = 7;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_228 = CONCAT44(uRam0000000141ddbd0c,_DAT_141ddbd08);
    uStack_220 = CONCAT44(DAT_141ddbd14,uRam0000000141ddbd10);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_228);
    local_168 = local_1e8;
    gml_Script_CreateBossUi(local_res8,local_res10,&local_238,1,&local_168);
    local_208 = 8;
    uStack_240._4_4_ = 0xd;
    local_248 = (longlong *)0x0;
    if (&local_248 != pplVar5) {
      local_228 = 0;
      uStack_220 = CONCAT44(0xd,(uint)uStack_240);
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar5);
      }
      FUN_140041b80(pplVar5,&local_228);
    }
    local_208 = 9;
LAB_140df829b:
    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
    FUN_140046040(uVar6);
  }
  else {
    local_208 = 0xd;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
    uStack_240 = uStack_240 & 0xffffffff;
    local_248 = (longlong *)0x3ff0000000000000;
    iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
    if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar3 == 0) {
      local_208 = 0xf;
      uStack_220 = CONCAT44(0xd,(undefined4)uStack_220);
      local_228 = 0;
      local_248 = (longlong *)0x0;
      uStack_240 = uStack_220;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_248);
      local_208 = 0x10;
      uStack_240._4_4_ = 0xf;
      local_248 = (longlong *)0x1000000000000cb;
      iVar3 = FUN_140e63cb0(&local_188,&local_res8,&local_res10,&local_248);
      if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (0 < iVar3) {
        do {
          local_208 = 0x11;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f4268);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 != '\0') {
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
            FUN_140e87440(uVar6,DAT_1419f5878,0x80000000,&local_e8,
                          (ulonglong)pcVar11 & 0xffffffffffffff00,
                          in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
            uVar6 = FUN_140069500(uVar6);
            in_stack_fffffffffffffdb0 = 0;
            pcVar11 = (code *)&local_e8;
            uVar6 = FUN_140e63610(uVar6,local_res10,&local_238,0,pcVar11,0);
            cVar2 = FUN_140e491e0(uVar6);
            if (cVar2 != '\0') {
              local_208 = 0x12;
              local_228 = 0x3ff0000000000000;
              uStack_240._0_4_ = (uint)uStack_220;
              uStack_220 = CONCAT44(0xd,(uint)uStack_240);
              local_248 = (longlong *)0x3ff0000000000000;
              uStack_240._4_4_ = 0xd;
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              FUN_140041b80(&local_128,&local_248);
            }
          }
          cVar2 = FUN_140e643f0(&local_188,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      uVar12 = (undefined4)((ulonglong)pcVar11 >> 0x20);
      FUN_140e63970(&local_188,&local_res8,&local_res10);
      local_208 = 0x14;
      cVar2 = FUN_140e491e0(&local_128);
      if (cVar2 != '\0') {
        local_208 = 0x16;
        uStack_240 = CONCAT44(0xd,(uint)uStack_240);
        local_248 = (longlong *)0x0;
        if (&local_248 != pplVar5) {
          local_228 = 0;
          uStack_220 = CONCAT44(0xd,(uint)uStack_240);
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar5);
          }
          FUN_140041b80(pplVar5,&local_228);
        }
        local_208 = 0x17;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
        local_228 = 0x1000002000000a9;
        local_248 = (longlong *)0x1000002000000a9;
        uStack_240 = CONCAT44(0xf,(undefined4)uStack_220);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_168 = local_1e8;
        uVar6 = CONCAT44(uVar12,DAT_141a07788);
        FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_168);
        uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_208 = 0x18;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
        local_228 = 0x1000002000000a9;
        local_248 = (longlong *)0x1000002000000a9;
        uStack_240._0_4_ = (undefined4)uStack_220;
        uStack_240._4_4_ = 0xf;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_168 = local_1e8;
        local_228 = CONCAT44(uRam00000001419ee724,_DAT_1419ee720);
        uStack_220 = CONCAT44(uRam00000001419ee72c,uRam00000001419ee728);
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_228);
        local_160 = local_1d8;
        local_228 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_220 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_228);
        local_158 = local_1c8;
        FUN_140e634e0(local_res8,local_res10,&local_238,3,CONCAT44(uVar12,DAT_141a0a2e8),&local_168)
        ;
        local_208 = 0x19;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_228 = CONCAT44(uRam0000000141ddbcfc,_DAT_141ddbcf8);
        uStack_220 = CONCAT44(DAT_141ddbd04,uRam0000000141ddbd00);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_228);
        local_168 = local_1e8;
        gml_Script_CreateBossUi(local_res8,local_res10,&local_238,1,&local_168);
        local_208 = 0x1a;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
        FUN_140046040(uVar6);
      }
      local_58 = CONCAT44(uStack_174,local_178);
    }
    else {
      local_208 = 0x1e;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
      uStack_240 = uStack_240 & 0xffffffff;
      local_248 = (longlong *)0x4000000000000000;
      uVar4 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,1);
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (uVar4 < 0x80000000) {
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
        uStack_240 = uStack_240 & 0xffffffff;
        local_248 = (longlong *)0x4010000000000000;
        iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,1);
        if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if (iVar3 != -2 && iVar3 < 1) {
          local_208 = 0x20;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          uVar12 = (undefined4)((ulonglong)pcVar11 >> 0x20);
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
          local_228 = 0x10000000000007e;
          local_248 = (longlong *)0x10000000000007e;
          uStack_240._0_4_ = (undefined4)uStack_220;
          uStack_240._4_4_ = 0xf;
          if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1e8);
          }
          FUN_140041b80(local_1e8,&local_248);
          local_168 = local_1e8;
          ppuVar13 = &local_168;
          puVar9 = (undefined8 *)CONCAT44(uVar12,DAT_141a02ef8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,1,puVar9,ppuVar13);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 == '\0') {
            local_208 = 0x22;
            uStack_240 = CONCAT44(0xd,(uint)uStack_240);
            local_248 = (longlong *)0x3ff0000000000000;
            if (&local_248 != pplVar5) {
              local_228 = 0x3ff0000000000000;
              uStack_220 = CONCAT44(0xd,(uint)uStack_240);
              if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pplVar5);
              }
              FUN_140041b80(pplVar5,&local_228);
            }
            local_208 = 0x23;
            uStack_220 = CONCAT44(0xd,(undefined4)uStack_220);
            local_228 = 0;
            local_248 = (longlong *)0x0;
            uStack_240 = uStack_220;
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            FUN_140041b80(&local_138,&local_248);
            uStack_240._4_4_ = 0xf;
            local_248 = (longlong *)0x1000000000000ee;
            FUN_140e87930(&local_248,DAT_1419f7f38,0x80000000,&local_138);
            if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
          }
          local_208 = 0x26;
          uStack_240._4_4_ = 0xf;
          local_248 = (longlong *)0x1000000000000cb;
          iVar3 = FUN_140e63cb0(&local_188,&local_res8,&local_res10,&local_248);
          if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (0 < iVar3) {
            do {
              local_208 = 0x27;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f4268);
              cVar2 = FUN_140e491e0(uVar6);
              if (cVar2 != '\0') {
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                local_238 = 0;
                local_230 = 0;
                local_22c = 5;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
                FUN_140e87440(uVar6,DAT_1419f5878,0x80000000,&local_e8,
                              (ulonglong)puVar9 & 0xffffffffffffff00,
                              (ulonglong)ppuVar13 & 0xffffffffffffff00);
                uVar6 = FUN_140069500(uVar6);
                ppuVar13 = (undefined1 **)0x0;
                puVar9 = &local_e8;
                uVar6 = FUN_140e63610(uVar6,local_res10,&local_238,0,puVar9,0);
                cVar2 = FUN_140e491e0(uVar6);
                if (cVar2 != '\0') {
                  local_208 = 0x29;
                  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
                  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_f8);
                  }
                  local_ec = 0;
                  local_f8 = 0x41cdcd64ff800000;
                  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_f8);
                  local_208 = 0x2a;
                  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_238);
                  }
                  local_238 = 0;
                  local_230 = 0;
                  local_22c = 5;
                  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
                  ppuVar13 = (undefined1 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
                  puVar9 = (undefined8 *)((ulonglong)puVar9 & 0xffffffffffffff00);
                  FUN_140e87440(uVar6,DAT_141a1dce0,0x80000000,&local_98,puVar9,ppuVar13);
                  local_228 = local_98;
                  uStack_220 = CONCAT44(uStack_8c,uStack_90);
                  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_1e8);
                  }
                  FUN_140041b80(local_1e8,&local_228);
                  local_168 = local_1e8;
                  local_228 = CONCAT44(uRam00000001419ee734,_DAT_1419ee730);
                  uStack_220 = CONCAT44(uRam00000001419ee73c,uRam00000001419ee738);
                  if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_1d8);
                  }
                  FUN_140041b80(local_1d8,&local_228);
                  local_160 = local_1d8;
                  puVar8 = (undefined8 *)FUN_140e79090(&local_238,2,&local_168);
                  if (puVar8 != &local_108) {
                    local_228 = *puVar8;
                    uStack_220 = puVar8[1];
                    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_108);
                    }
                    FUN_140041b80(&local_108,&local_228);
                  }
                  FUN_140e87930(uVar6,DAT_141a1dce0,0x80000000,&local_108);
                }
              }
              cVar2 = FUN_140e643f0(&local_188,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(&local_188,&local_res8,&local_res10);
          local_58 = CONCAT44(uStack_174,local_178);
          goto LAB_140df8512;
        }
      }
      local_208 = 0x2d;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
      uStack_240 = uStack_240 & 0xffffffff;
      local_248 = (longlong *)0x4014000000000000;
      iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (iVar3 == 0) {
        local_208 = 0x2f;
        uStack_240 = CONCAT44(0xd,(uint)uStack_240);
        local_248 = (longlong *)0x0;
        if (&local_248 != pplVar5) {
          local_228 = 0;
          uStack_220 = CONCAT44(0xd,(uint)uStack_240);
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar5);
          }
          FUN_140041b80(pplVar5,&local_228);
        }
        local_208 = 0x30;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_240._4_4_ = 0xf;
        local_248 = (longlong *)0x1000000000000ee;
        FUN_140e87440(&local_248,DAT_1419ff968,0x80000000,&local_a8,
                      (ulonglong)pcVar11 & 0xffffffffffffff00,
                      in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_240._4_4_ = 0xf;
        local_248 = (longlong *)0x1000000000000ee;
        uVar6 = FUN_140069500(&local_248);
        puVar9 = &local_a8;
        uVar6 = FUN_140e63610(uVar6,local_res10,&local_238,0,puVar9,0);
        uVar12 = (undefined4)((ulonglong)puVar9 >> 0x20);
        cVar2 = FUN_140e491e0(uVar6);
        if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if (cVar2 == '\0') goto LAB_140df8c55;
        local_208 = 0x32;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
        local_228 = 0x1000002000000a9;
        local_248 = (longlong *)0x1000002000000a9;
        uStack_240._0_4_ = (undefined4)uStack_220;
        uStack_240._4_4_ = 0xf;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_168 = local_1e8;
        local_228 = CONCAT44(uRam00000001419ee724,_DAT_1419ee720);
        uStack_220 = CONCAT44(uRam00000001419ee72c,uRam00000001419ee728);
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_228);
        local_160 = local_1d8;
        local_228 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_220 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_228);
        local_158 = local_1c8;
        FUN_140e634e0(local_res8,local_res10,&local_200,3,CONCAT44(uVar12,DAT_141a0a2e8),&local_168)
        ;
        local_208 = 0x33;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_228 = CONCAT44(uRam0000000141ddbcec,_DAT_141ddbce8);
        uStack_220 = CONCAT44(DAT_141ddbcf4,uRam0000000141ddbcf0);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_228);
        local_168 = local_1e8;
        gml_Script_CreateBossUi(local_res8,local_res10,&local_238,1,&local_168);
        local_208 = 0x34;
        goto LAB_140df829b;
      }
      local_208 = 0x38;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
      uVar12 = (undefined4)((ulonglong)pcVar11 >> 0x20);
      uStack_240 = uStack_240 & 0xffffffff;
      local_248 = (longlong *)0x4018000000000000;
      iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (iVar3 != 0) {
        local_208 = 0x45;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
        uStack_240._4_4_ = 0;
        local_248 = (longlong *)0x401c000000000000;
        iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
        if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if (iVar3 != 0) goto LAB_140df8c55;
        local_208 = 0x47;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
        local_228 = 0x1000002000000a9;
        local_188 = (undefined8 *)0x1000002000000a9;
        uStack_180 = (char *)CONCAT44(0xf,(undefined4)uStack_220);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_188);
        local_168 = local_1e8;
        local_188 = (undefined8 *)CONCAT44(uRam00000001419ee724,_DAT_1419ee720);
        uStack_180 = (char *)CONCAT44(uRam00000001419ee72c,uRam00000001419ee728);
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_188);
        local_160 = local_1d8;
        local_188 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_180 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_188);
        local_158 = local_1c8;
        FUN_140e634e0(local_res8,local_res10,&local_238,3,CONCAT44(uVar12,DAT_141a0a2e8),&local_168)
        ;
        local_208 = 0x48;
        uStack_220 = CONCAT44(0xd,(undefined4)uStack_220);
        local_228 = 0;
        local_188 = (undefined8 *)0x0;
        uStack_180 = (char *)uStack_220;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_188);
        uStack_240._4_4_ = 0xf;
        local_248 = (longlong *)0x1000000000000ee;
        FUN_140e87930(&local_248,DAT_1419f7f38,0x80000000,&local_138);
        if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_208 = 0x49;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_188 = (undefined8 *)CONCAT44(uRam0000000141ddbcdc,_DAT_141ddbcd8);
        uStack_180 = (char *)CONCAT44(DAT_141ddbce4,uRam0000000141ddbce0);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_188);
        local_168 = local_1e8;
        gml_Script_CreateBossUi(local_res8,local_res10,&local_238,1,&local_168);
        local_208 = 0x4a;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_188 = (undefined8 *)CONCAT44(uRam0000000141ddbccc,_DAT_141ddbcc8);
        uStack_180 = (char *)CONCAT44(DAT_141ddbcd4,uRam0000000141ddbcd0);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_188);
        local_168 = local_1e8;
        local_188 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_180 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_188);
        uVar7 = local_res10;
        plVar1 = local_res8;
        local_160 = local_1d8;
        uStack_180 = "gml_Script_savedata_set";
        local_188 = DAT_141dc7a50;
        DAT_141dc7a50 = &local_188;
        local_178 = 8;
        uVar10 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
        local_22c = 5;
        local_238 = 0;
        local_178 = 10;
        FUN_140e98ef0(plVar1,uVar7,uVar10,local_168,local_160);
        DAT_141dc7a50 = local_188;
        local_208 = 0x4b;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uVar12 = 0;
        gml_Script_settings_save(local_res8,local_res10,&local_238,0,0);
        local_208 = 0x4e;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_220 = CONCAT44(0xf,(undefined4)uStack_220);
        local_228 = 0x1000000000000ff;
        local_188 = (undefined8 *)0x1000000000000ff;
        uStack_180 = (char *)CONCAT44(0xf,(undefined4)uStack_220);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_188);
        local_168 = local_1e8;
        ppuVar13 = &local_168;
        uVar14 = CONCAT44(uVar12,DAT_141a02ef8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar14,ppuVar13);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 != '\0') {
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 == '\0') {
            if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_200);
            }
            local_200 = 0;
            local_1f8 = 0;
            local_1f4 = 5;
            uStack_240._4_4_ = 0xf;
            local_248 = (longlong *)0x1000000000000ff;
            FUN_140e87440(&local_248,DAT_141a56b50,0x80000000,&local_b8,uVar14 & 0xffffffffffffff00,
                          (ulonglong)ppuVar13 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            uStack_240._4_4_ = 0xf;
            local_248 = (longlong *)0x1000000000000ff;
            uVar6 = FUN_140069500(&local_248);
            uVar14 = 0;
            puVar9 = &local_b8;
            uVar6 = FUN_140e63610(uVar6,local_res10,&local_200,0,puVar9,0);
            ppuVar13 = (undefined1 **)(uVar14 & 0xffffffffffffff00);
            uVar14 = (ulonglong)puVar9 & 0xffffffffffffff00;
            FUN_140e87440(uVar6,DAT_1419f6118,0x80000000,&local_c8,uVar14,ppuVar13);
            if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            cVar2 = FUN_140e491e0(&local_c8);
            if (cVar2 != '\0') goto LAB_140df8c33;
          }
          local_208 = 0x4f;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          uStack_240._4_4_ = 0xf;
          local_248 = (longlong *)0x1000000000000ff;
          FUN_140e87440(&local_248,DAT_1419fa178,0x80000000,&local_d8,uVar14 & 0xffffffffffffff00,
                        (ulonglong)ppuVar13 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_188 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_180 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_188);
          local_160 = local_1d8;
          uStack_240._4_4_ = 0xf;
          local_248 = (longlong *)0x1000000000000ff;
          uVar6 = FUN_140069500(&local_248);
          FUN_140e63610(uVar6,local_res10,&local_118,1,&local_d8,&local_160);
          if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
        }
LAB_140df8c33:
        local_208 = 0x51;
        FUN_140edd0e0(local_res8,local_res10,0,0);
        goto LAB_140df8c55;
      }
      local_208 = 0x3a;
      uStack_240._4_4_ = 0xf;
      local_248 = (longlong *)0x1000000000000ee;
      iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_248);
      if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (0 < iVar3) {
        do {
          local_208 = 0x3c;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a066f8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          *puVar9 = 0;
          local_208 = 0x3d;
          pplVar5 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7f38);
          uStack_240._4_4_ = 0xd;
          local_248 = (longlong *)0x3ff0000000000000;
          if (&local_248 != pplVar5) {
            local_188 = (undefined8 *)0x3ff0000000000000;
            uStack_180 = (char *)CONCAT44(0xd,(uint)uStack_240);
            if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pplVar5);
            }
            FUN_140041b80(pplVar5,&local_188);
          }
          local_208 = 0x3e;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f8368);
          uStack_220 = CONCAT44(0xd,(undefined4)uStack_220);
          local_228 = 0x3ff0000000000000;
          if (&local_228 != puVar9) {
            local_188 = (undefined8 *)0x3ff0000000000000;
            uStack_180 = (char *)CONCAT44(0xd,(undefined4)uStack_220);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            FUN_140041b80(puVar9,&local_188);
          }
          local_208 = 0x3f;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          *puVar9 = 0;
          cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_68,&local_res8,&local_res10);
    }
LAB_140df8512:
    if (local_58 != 0) {
      FUN_140e4cd60();
    }
  }
LAB_140df8c55:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_1e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return;
}

