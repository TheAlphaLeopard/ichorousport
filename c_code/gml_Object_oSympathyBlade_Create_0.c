// gml_Object_oSympathyBlade_Create_0 @ 0x140da6de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSympathyBlade_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined1 **ppuVar9;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar11;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined4 local_118 [3];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 *local_f8;
  undefined4 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_98 = "gml_Object_oSwordSpikes_Step_0";
  local_90 = 0;
  local_a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a0;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_a4 = 0;
  local_b0 = 0x3fd3333333333333;
  local_90 = 3;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08a28);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_90 = 0xd;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar10 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    local_168 = (longlong *)CONCAT44(uRam0000000141dc77e4,_DAT_141dc77e0);
    uStack_160 = uRam0000000141dc77e8;
    uStack_15c = uRam0000000141dc77ec;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_f8 = local_128;
    ppuVar9 = &local_f8;
    uVar8 = CONCAT44(uVar10,DAT_141a0a0d8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar8,ppuVar9);
    uVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,1);
    if (uVar2 < 0x80000000) {
      local_90 = 0xf;
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      local_a4 = 0;
      local_b0 = 0x3fc999999999999a;
      local_90 = 0x10;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      uVar11 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_38,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fde18,0x80000000,&local_88,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_141a0f7f8,0x80000000,&local_48,uVar8 & 0xffffffffffffff00,uVar11)
      ;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = (longlong *)local_38;
      uStack_160 = uStack_30;
      uStack_15c = uStack_2c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_168);
      local_f8 = local_128;
      uStack_15c = 0;
      local_168 = (longlong *)0x4020000000000000;
      FUN_140042560(&local_168,&local_48);
      uStack_13c = local_7c;
      uStack_140 = local_80;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
        local_148 = local_88;
      }
      else {
        FUN_1400419b0(&local_148,&local_88);
      }
      FUN_1400462a0(&local_148,&local_168);
      local_138 = (undefined4)local_148;
      uStack_134 = local_148._4_4_;
      uStack_130 = uStack_140;
      uStack_12c = uStack_13c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_f0 = local_118;
      local_e8 = &local_b0;
      ppuVar9 = &local_f8;
      puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_158,3,ppuVar9);
      if (puVar4 != &local_c0) {
        local_138 = *(undefined4 *)puVar4;
        uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_130 = *(undefined4 *)(puVar4 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c0);
      local_90 = 0x11;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_58,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fec88,0x80000000,&local_78,uVar8 & 0xffffffffffffff00,uVar11)
      ;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_58;
      uStack_134 = local_58._4_4_;
      uStack_130 = uStack_50;
      uStack_12c = uStack_4c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_f8 = local_128;
      uStack_13c = uStack_6c;
      uStack_140 = uStack_70;
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
        local_148 = local_78;
      }
      else {
        FUN_1400419b0(&local_148,&local_78);
      }
      uStack_15c = 7;
      local_168 = (longlong *)CONCAT44(local_168._4_4_,0x28);
      FUN_1400460e0(&local_148,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_148;
      uStack_134 = local_148._4_4_;
      uStack_130 = uStack_140;
      uStack_12c = uStack_13c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_f0 = local_118;
      local_e8 = &local_b0;
      ppuVar9 = &local_f8;
      puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_158,3,ppuVar9);
      if (puVar4 != &local_d0) {
        local_138 = *(undefined4 *)puVar4;
        uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_130 = *(undefined4 *)(puVar4 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d0);
      local_90 = 0x12;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fddf8);
      uStack_15c = 6;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_141a0a778,0x80000000,&local_68,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_68;
      uStack_134 = local_68._4_4_;
      uStack_130 = uStack_60;
      uStack_12c = uStack_5c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_f8 = local_128;
      if (puVar6 != local_118) {
        local_138 = *puVar6;
        uStack_134 = puVar6[1];
        uStack_130 = puVar6[2];
        uStack_12c = puVar6[3];
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_138);
      }
      local_f0 = local_118;
      local_138 = _DAT_1419edfe0;
      uStack_134 = uRam00000001419edfe4;
      uStack_130 = uRam00000001419edfe8;
      uStack_12c = uRam00000001419edfec;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
      local_e8 = &local_108;
      ppuVar9 = &local_f8;
      puVar4 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_158,3,ppuVar9)
      ;
      uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    }
    else {
      local_90 = 0x17;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      uVar11 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_38,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fde18,0x80000000,&local_88,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_141a0f7f8,0x80000000,&local_48,uVar8,uVar11 & 0xffffffffffffff00)
      ;
      uVar10 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_38;
      uStack_134 = local_38._4_4_;
      uStack_130 = uStack_30;
      uStack_12c = uStack_2c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_f8 = local_128;
      uStack_15c = 0;
      local_168 = (longlong *)0x4020000000000000;
      FUN_140042560(&local_168,&local_48);
      uStack_13c = local_7c;
      uStack_140 = local_80;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
        local_148 = local_88;
      }
      else {
        FUN_1400419b0(&local_148,&local_88);
      }
      FUN_1400460e0(&local_148,&local_168);
      local_138 = (undefined4)local_148;
      uStack_134 = local_148._4_4_;
      uStack_130 = uStack_140;
      uStack_12c = uStack_13c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_f0 = local_118;
      local_e8 = &local_b0;
      ppuVar9 = &local_f8;
      uVar8 = CONCAT44(uVar10,DAT_141a00c58);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,ppuVar9);
      if (puVar4 != &local_c0) {
        local_138 = *(undefined4 *)puVar4;
        uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_130 = *(undefined4 *)(puVar4 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c0);
      local_90 = 0x18;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      uVar11 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_58,uVar8,uVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_15c = 6;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fec88,0x80000000,&local_78,uVar8,uVar11 & 0xffffffffffffff00)
      ;
      uVar10 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_58;
      uStack_134 = local_58._4_4_;
      uStack_130 = uStack_50;
      uStack_12c = uStack_4c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_f8 = local_128;
      local_138 = (undefined4)local_78;
      uStack_134 = local_78._4_4_;
      uStack_130 = uStack_70;
      uStack_12c = uStack_6c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      local_f0 = local_118;
      local_e8 = &local_b0;
      ppuVar9 = &local_f8;
      uVar8 = CONCAT44(uVar10,DAT_141a00c58);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,ppuVar9);
      if (puVar4 != &local_d0) {
        local_138 = *(undefined4 *)puVar4;
        uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_130 = *(undefined4 *)(puVar4 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d0);
      local_90 = 0x19;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_141a0a778,0x80000000,&local_68,uVar8 & 0xffffffffffffff00,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_138 = (undefined4)local_68;
      uStack_134 = local_68._4_4_;
      uStack_130 = uStack_60;
      uStack_12c = uStack_5c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_f8 = local_128;
      local_138 = _DAT_141dc77e0;
      uStack_134 = uRam0000000141dc77e4;
      uStack_130 = uRam0000000141dc77e8;
      uStack_12c = uRam0000000141dc77ec;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      local_f0 = local_118;
      local_e8 = &local_b0;
      ppuVar9 = &local_f8;
      puVar4 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_158,3,ppuVar9);
      uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    }
    if (puVar4 == &local_e0) goto LAB_140da8091;
    local_138 = *(undefined4 *)puVar4;
    uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    puVar4 = (undefined8 *)&local_138;
  }
  else {
    local_90 = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_15c = 6;
    in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_c0,uVar8,in_stack_fffffffffffffe90);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_1400460e0(&local_c0,uVar3);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c0);
    local_90 = 6;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_15c = 6;
    in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_141a0f7f8,0x80000000,&local_48,uVar8,in_stack_fffffffffffffe90);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_13c = 0;
    local_148 = 0x3fb999999999999a;
    FUN_140042560(&local_148,&local_48);
    FUN_1400460e0(uVar3,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_90 = 7;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_15c = 6;
    in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_58,uVar8,in_stack_fffffffffffffe90);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_15c = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fec88,0x80000000,&local_78,uVar8,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = (longlong *)local_58;
    uStack_160 = uStack_50;
    uStack_15c = uStack_4c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_f8 = local_128;
    local_168 = (longlong *)local_78;
    uStack_160 = uStack_70;
    uStack_15c = uStack_6c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
    local_f0 = local_118;
    local_e8 = &local_b0;
    ppuVar9 = &local_f8;
    uVar8 = CONCAT44(uVar10,DAT_141a00c58);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,ppuVar9);
    if (puVar4 != &local_d0) {
      local_168 = (longlong *)*puVar4;
      uStack_160 = *(undefined4 *)(puVar4 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_168);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d0);
    local_90 = 8;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_15c = 6;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_141a0a778,0x80000000,&local_68,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = (longlong *)local_68;
    uStack_160 = uStack_60;
    uStack_15c = uStack_5c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_f8 = local_128;
    local_168 = (longlong *)CONCAT44(uRam0000000141dc77e4,_DAT_141dc77e0);
    uStack_160 = uRam0000000141dc77e8;
    uStack_15c = uRam0000000141dc77ec;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
    local_f0 = local_118;
    local_e8 = &local_b0;
    ppuVar9 = &local_f8;
    puVar4 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_158,3,ppuVar9);
    uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    if (puVar4 == &local_e0) goto LAB_140da8091;
    local_168 = (longlong *)*puVar4;
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    puVar4 = &local_168;
  }
  FUN_140041b80(&local_e0,puVar4);
LAB_140da8091:
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_e0);
  local_90 = 0x20;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  local_138 = _DAT_141dc77e0;
  uStack_134 = uRam0000000141dc77e4;
  uStack_130 = uRam0000000141dc77e8;
  uStack_12c = uRam0000000141dc77ec;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  local_f8 = local_128;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar10,DAT_141a0a0d8),&local_f8);
  uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_140 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_148,puVar4);
  }
  uStack_15c = 7;
  local_168 = (longlong *)CONCAT44(local_168._4_4_,5);
  FUN_140042560(&local_148,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uVar2 = FUN_140e851f0(uVar3,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar2 < 0x80000000) {
    local_90 = 0x21;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_90 = 0x23;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  FUN_140e63610(param_1,param_2,&local_158,0,uVar3,0);
  local_90 = 0x26;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar3);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a0;
  return;
}

