// gml_Script____struct___552_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a9fef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___552_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe60;
  undefined8 **ppuVar14;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_108 = "gml_Script_anon@10824@___struct___552@gml_Object_oEnemyWormBrute_Create_0";
  local_110 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_110;
  local_100 = 0x1db;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_168,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18c = 0;
  local_198 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_100 = 0x1dc;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f2378,0x80000000,&local_b8,uVar6,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar6 >> 0x20);
  local_188 = local_b8;
  uStack_180 = uStack_b0;
  uStack_17c = uStack_ac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  ppuVar14 = &local_128;
  uVar6 = CONCAT44(uVar13,DAT_1419fdc08);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,ppuVar14);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_100 = 0x1dc;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2268);
    ppuVar14 = (undefined8 **)0x0;
    puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_138,0,uVar6,0);
    if (puVar7 != &local_e8) {
      local_188 = *puVar7;
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_188);
    }
    FUN_140e87930(uVar5,DAT_1419f2378,0x80000000,&local_e8);
  }
  local_100 = 0x1dd;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f2568,0x80000000,&local_c8,uVar6,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar6 >> 0x20);
  local_188 = local_c8;
  uStack_180 = uStack_c0;
  uStack_17c = uStack_bc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  ppuVar14 = &local_128;
  uVar6 = CONCAT44(uVar13,DAT_1419fdc08);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,ppuVar14);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_100 = 0x1dd;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_f8 = 0;
    FUN_140e87930(uVar5,DAT_1419f2568,0x80000000,&local_f8);
  }
  local_100 = 0x1de;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2268);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar8,DAT_1419f2378,0x80000000,&local_b8,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  local_188 = local_b8;
  uStack_180 = uStack_b0;
  uStack_17c = uStack_ac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  uVar6 = 0;
  puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
  if (puVar7 != &local_158) {
    local_188 = *puVar7;
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_120 = &local_158;
  uStack_16c = 0;
  local_178 = 0x4008000000000000;
  FUN_140042560(&local_178,puVar4);
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = local_148;
  ppuVar14 = &local_128;
  puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,ppuVar14);
  if (puVar7 != &local_e8) {
    local_188 = *puVar7;
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_188);
  }
  FUN_140e87930(uVar8,DAT_1419f2378,0x80000000,&local_e8);
  local_100 = 0x1df;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f2568,0x80000000,&local_c8,(ulonglong)ppuVar14 & 0xffffffffffffff00,
                uVar6);
  local_188 = local_c8;
  uStack_180 = uStack_c0;
  uStack_17c = uStack_bc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_180 = uRam0000000141dc6fe8;
  uStack_17c = uRam0000000141dc6fec;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_188);
  local_120 = &local_158;
  uStack_16c = 0;
  local_178 = 0x4014000000000000;
  FUN_140042560(&local_178,puVar4);
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = local_148;
  ppuVar14 = &local_128;
  puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,ppuVar14);
  if (puVar7 != &local_f8) {
    local_188 = *puVar7;
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_188);
  }
  FUN_140e87930(uVar5,DAT_1419f2568,0x80000000,&local_f8);
  local_100 = 0x1e1;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar9 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f2518,0x80000000,&local_d8,uVar9,uVar6 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar9 >> 0x20);
  local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_180 = uRam0000000141dc6fe8;
  uStack_17c = uRam0000000141dc6fec;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  ppuVar14 = &local_128;
  uVar6 = CONCAT44(uVar13,DAT_141a0a0d8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar6,ppuVar14);
  uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_170 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_178,puVar7);
  }
  uStack_17c = 0;
  local_188 = 0x3fd999999999999a;
  FUN_140042560(&local_178,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_60 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_68,puVar4);
  }
  FUN_140046500(&local_68,&local_178);
  uStack_6c = uStack_cc;
  uStack_70 = uStack_d0;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_78 = local_d8;
  }
  else {
    FUN_1400419b0(&local_78,&local_d8);
  }
  FUN_1400462a0(&local_78,&local_68);
  local_188 = local_78;
  uStack_180 = uStack_70;
  uStack_17c = uStack_6c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_188);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_120 = &local_158;
  local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_180 = uRam0000000141dc6fe8;
  uStack_17c = uRam0000000141dc6fec;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  local_118 = local_148;
  puVar4 = (undefined8 *)FUN_140e79090(&local_198,2,&local_120);
  if (puVar4 != &local_88) {
    local_188 = *puVar4;
    uStack_180 = *(undefined4 *)(puVar4 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_188);
  }
  FUN_140e87930(uVar5,DAT_1419f2518,0x80000000,&local_88);
  local_100 = 0x1e2;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2598);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar8,DAT_1419f2518,0x80000000,&local_d8,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  local_188 = local_d8;
  uStack_180 = uStack_d0;
  uStack_17c = uStack_cc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  local_128 = &local_168;
  FUN_140e63610(param_1,param_2,&local_198,1,uVar5,&local_128);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_100 = 0x1e3;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2428);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2428);
  if (puVar4 != &local_168) {
    local_188 = *puVar4;
    uStack_180 = *(undefined4 *)(puVar4 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_188);
  }
  local_128 = &local_168;
  local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_180 = uRam0000000141dc6fe8;
  uStack_17c = uRam0000000141dc6fec;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_188);
  local_120 = &local_158;
  local_188 = CONCAT44(uRam00000001419eb294,_DAT_1419eb290);
  uStack_180 = uRam00000001419eb298;
  uStack_17c = uRam00000001419eb29c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  local_118 = local_148;
  FUN_140e609c0(param_1);
  ppuVar14 = &local_128;
  uVar6 = CONCAT44(uVar13,DAT_141a00c58);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,3,uVar6,ppuVar14);
  if (puVar4 != puVar7) {
    local_188 = *puVar4;
    uStack_180 = *(undefined4 *)(puVar4 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_188);
  }
  FUN_140e60910(1);
  local_100 = 0x1e4;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21a8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2428);
  FUN_140e87440(uVar5,DAT_1419f2378,0x80000000,&local_b8,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_1400460e0(&local_178,&local_b8);
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_128 = &local_168;
  if (puVar7 != &local_158) {
    local_188 = *puVar7;
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_120 = &local_158;
  ppuVar14 = &local_128;
  FUN_140e63610(param_1,param_2,&local_198,2,uVar9,ppuVar14);
  local_100 = 0x1e5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f24c8);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  FUN_140e87440(uVar5,DAT_1419f2568,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_1400460e0(&local_178,&local_c8);
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_188);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_128 = &local_168;
  local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_180 = uRam0000000141dc6fe8;
  uStack_17c = uRam0000000141dc6fec;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_188);
  local_120 = &local_158;
  local_188 = CONCAT44(uRam00000001419eb1d4,_DAT_1419eb1d0);
  uStack_180 = uRam00000001419eb1d8;
  uStack_17c = uRam00000001419eb1dc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  local_118 = local_148;
  FUN_140e609c0(param_1);
  plVar11 = (longlong *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_198,3,&local_128);
  if (plVar11 != plVar10) {
    local_188 = *plVar11;
    uStack_180 = (undefined4)plVar11[1];
    uStack_17c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_188);
  }
  FUN_140e60910(1);
  local_100 = 0x1e6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2468);
  FUN_140e63610(param_1,param_2,&local_198,0,uVar5,0);
  local_100 = 0x1e7;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar3 = FUN_140e4a740(uVar5);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar10 != &local_98) {
    local_188 = *plVar10;
    uStack_180 = (undefined4)plVar10[1];
    uStack_17c = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_100 = 0x1e8;
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar3 = FUN_140e4a740(uVar5);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar10 != &local_a8) {
    local_188 = *plVar10;
    uStack_180 = (undefined4)plVar10[1];
    uStack_17c = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  local_100 = 0x1ea;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar9 = 0;
  FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
  local_100 = 0x1ec;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f2518,0x80000000,&local_d8,uVar6,uVar9);
  uStack_17c = 0;
  local_188 = 0;
  iVar3 = FUN_140e851f0(&local_d8,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar3 != -2 && iVar3 < 1) {
    local_100 = 0x1ed;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_58,uVar6 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    local_188 = CONCAT44(uRam0000000141dd90cc,_DAT_141dd90c8);
    uStack_180 = uRam0000000141dd90d0;
    uStack_17c = DAT_141dd90d4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_188);
    local_128 = &local_168;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_198,1,&local_58,&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_110;
  return param_3;
}

