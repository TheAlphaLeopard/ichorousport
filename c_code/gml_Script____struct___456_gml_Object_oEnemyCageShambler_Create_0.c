// gml_Script____struct___456_gml_Object_oEnemyCageShambler_Create_0 @ 0x14096b390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___456_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  double dVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 **ppuVar9;
  longlong *plVar10;
  ulonglong in_stack_fffffffffffffdd0;
  longlong *plVar11;
  undefined8 **ppuVar12;
  undefined4 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  uint local_10c;
  longlong *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_1f0 = "gml_Script_anon@14811@___struct___456@gml_Object_oEnemyCageShambler_Create_0";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x28c;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_198,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_21c = 0;
  local_228 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x28e;
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_c8 = local_198;
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_c0 = local_188;
  ppuVar9 = &local_c8;
  uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_228,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_1e8 = 0x29e;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    ppuVar13 = (undefined4 **)(in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
    uVar5 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_138,uVar5,ppuVar13);
    iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_138);
    if (0 < iVar2) {
      do {
        local_1e8 = 0x2a0;
        puVar4 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
        if (puVar4 != &local_148) {
          local_1a8 = *(undefined4 *)puVar4;
          uStack_1a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_1a0 = *(undefined4 *)(puVar4 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_1a8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_148);
        local_1e8 = 0x2a2;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_14c = 0;
        local_158 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_158);
        local_1e8 = 0x2a4;
        local_20c = 6;
        local_218 = local_res10;
        uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
        uVar5 = uVar5 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_98,uVar5,uVar14);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_1a8 = (undefined4)local_98;
        uStack_1a4 = local_98._4_4_;
        uStack_1a0 = uStack_90;
        uStack_19c = uStack_8c;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1a8);
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_e8);
        local_1e8 = 0x2a5;
        uStack_1fc = 6;
        local_208 = local_res10;
        FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_a8,uVar5 & 0xffffffffffffff00,
                      uVar14 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1a8 = (undefined4)local_a8;
        uStack_1a4 = local_a8._4_4_;
        uStack_1a0 = uStack_a0;
        uStack_19c = uStack_9c;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1a8);
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_f8);
        local_1e8 = 0x2a7;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
        puVar6 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
        if (puVar6 != local_198) {
          local_1a8 = *puVar6;
          uStack_1a4 = puVar6[1];
          uStack_1a0 = puVar6[2];
          uStack_19c = puVar6[3];
          if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1a8);
        }
        local_c8 = local_198;
        ppuVar13 = &local_c8;
        FUN_140e63610(local_res8,local_res10,&local_228,1,uVar5,ppuVar13);
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_138,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    local_1e8 = 0x2aa;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd588);
    FUN_140e63610(local_res8,local_res10,&local_228,0,uVar3,0);
    local_1e8 = 0x2ac;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
    FUN_140e63610(local_res8,local_res10,&local_228,0,uVar3,0);
    local_1e8 = 0x2ae;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
    FUN_140e63610(local_res8,local_res10,&local_228,0,uVar3,0);
    local_1e8 = 0x2af;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd418);
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
    if (puVar6 != local_198) {
      local_1a8 = *puVar6;
      uStack_1a4 = puVar6[1];
      uStack_1a0 = puVar6[2];
      uStack_19c = puVar6[3];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_1a8);
    }
    local_c8 = local_198;
    FUN_140e63610(local_res8,local_res10,&local_228,1,uVar3,&local_c8);
    if (local_58 != 0) {
      FUN_140e4cd60();
      local_58 = 0;
    }
    goto LAB_14096c1f0;
  }
  local_1e8 = 0x290;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  uVar7 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar4 != &local_178) {
    local_208 = (longlong *)*puVar4;
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_208);
  }
  local_b8 = &local_178;
  ppuVar12 = &local_b8;
  uVar5 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1c0,1,uVar5,ppuVar12);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
LAB_14096ba38:
    local_1e8 = 0x296;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_d8,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    local_208 = (longlong *)CONCAT44(uRam0000000141dd87bc,_DAT_141dd87b8);
    uStack_200 = uRam0000000141dd87c0;
    uStack_1fc = DAT_141dd87c4;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_208);
    local_c8 = local_198;
    uVar3 = FUN_140069500(uVar3);
    ppuVar9 = &local_c8;
    puVar4 = &local_d8;
    FUN_140e63610(uVar3,local_res10,&local_228,1,puVar4,ppuVar9);
    local_1e8 = 0x297;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57480);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0x4056800000000000;
    FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_128);
  }
  else {
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    plVar10 = local_res8;
    plVar11 = local_res10;
    FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_108,local_res8,local_res10);
    local_20c = 6;
    local_218 = local_res8;
    ppuVar12 = (undefined8 **)((ulonglong)plVar11 & 0xffffffffffffff00);
    uVar5 = (ulonglong)plVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_78,uVar5,ppuVar12);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = local_fc;
    local_210 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_218 = local_108;
    }
    else {
      FUN_1400419b0(&local_218,&local_108);
    }
    local_res18 = 1;
    FUN_1400462a0(&local_218,&local_78);
    if ((local_20c & 0xffffff) == 0) {
      uVar7 = SUB84(local_218,0);
    }
    else {
      uVar7 = FUN_140e4b060(&local_218);
    }
    dVar8 = (double)FUN_140e78d00(uVar7);
    local_res18 = 0;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (64.0 < dVar8) goto LAB_14096ba38;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    plVar10 = local_res8;
    plVar11 = local_res10;
    FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_118,local_res8,local_res10);
    local_20c = 6;
    local_218 = local_res8;
    ppuVar12 = (undefined8 **)((ulonglong)plVar11 & 0xffffffffffffff00);
    uVar5 = (ulonglong)plVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_88,uVar5,ppuVar12);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = local_10c;
    local_210 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_218 = local_118;
    }
    else {
      FUN_1400419b0(&local_218,&local_118);
    }
    local_res18 = 2;
    FUN_1400462a0(&local_218,&local_88);
    if ((local_20c & 0xffffff) == 0) {
      uVar7 = SUB84(local_218,0);
    }
    else {
      uVar7 = FUN_140e4b060(&local_218);
    }
    dVar8 = (double)FUN_140e78d00(uVar7);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (24.0 < dVar8) goto LAB_14096ba38;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a096c8);
    ppuVar12 = (undefined8 **)0x0;
    uVar3 = FUN_140e63610(local_res8,local_res10,&local_1d0,0,uVar5,0);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') goto LAB_14096ba38;
    local_1e8 = 0x292;
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_d8,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    local_208 = (longlong *)CONCAT44(uRam0000000141dd87ac,_DAT_141dd87a8);
    uStack_200 = uRam0000000141dd87b0;
    uStack_1fc = DAT_141dd87b4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_208);
    local_b0 = local_168;
    uVar3 = FUN_140069500(uVar3);
    ppuVar9 = &local_b0;
    puVar4 = &local_d8;
    FUN_140e63610(uVar3,local_res10,&local_1e0,1,puVar4,ppuVar9);
  }
  local_1e8 = 0x299;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_138,(ulonglong)puVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_208 = local_138;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_c8 = local_198;
  FUN_140edd0e0(local_res8,local_res10,1,&local_c8);
  local_1e8 = 0x29a;
LAB_14096c1f0:
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

