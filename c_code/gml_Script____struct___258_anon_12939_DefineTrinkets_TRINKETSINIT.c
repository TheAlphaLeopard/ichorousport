// gml_Script____struct___258_anon_12939_DefineTrinkets_TRINKETSINIT @ 0x1405eeac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___258_anon_12939_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar11;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 **ppuVar12;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_110 = "gml_Script_anon@12626@DefineTrinkets@TRINKETSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x1f5;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff848);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_18c = 0;
  local_198 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x1f6;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_168,uVar8,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_1b8 = (undefined4)local_168;
  uStack_1b4 = local_168._4_4_;
  uStack_1b0 = uStack_160;
  uStack_1ac = uStack_15c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1b8);
  ppuVar12 = &local_70;
  uVar8 = CONCAT44(uVar11,DAT_141a02ef8);
  local_70 = &local_e8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar8,ppuVar12);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_108 = 0x1f6;
  }
  else {
    local_108 = 0x1f8;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f6058,0x80000000,&local_128,uVar8,uVar10);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_168,uVar8 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    plVar9 = param_1;
    uVar8 = param_2;
    FUN_140e87170(&local_168,DAT_141a0a828,0x80000000,&local_138,param_1,param_2);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
    if (param_4 < 1) {
      FUN_140e87440(&DAT_1419df7b0,DAT_1419ffcd8,0x80000000,&local_158,uVar10,uVar8);
    }
    else {
      FUN_140e87440(*param_5,DAT_1419ffcd8,0x80000000,&local_158,uVar10,uVar8);
      puVar6 = (undefined8 *)*param_5;
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(puVar6,DAT_1419ffb88,0x80000000,&local_148,uVar10,uVar8 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    local_1b8 = _DAT_141dc6760;
    uStack_1b4 = uRam0000000141dc6764;
    uStack_1b0 = uRam0000000141dc6768;
    uStack_1ac = uRam0000000141dc676c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    local_78 = local_f8;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1a8,gml_Script_anon_12864_DefineTrinkets_TRINKETSINIT,0);
    if (&local_1a8 != puVar2) {
      local_1b8 = (undefined4)local_1a8;
      uStack_1b4 = local_1a8._4_4_;
      uStack_1b0 = uStack_1a0;
      uStack_1ac = uStack_19c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_1b8);
    }
    FUN_140e60910(1);
    if (puVar2 != &local_e8) {
      local_1b8 = *(undefined4 *)puVar2;
      uStack_1b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_1b0 = *(undefined4 *)(puVar2 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1b8);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1b8 = (undefined4)local_138;
    uStack_1b4 = local_138._4_4_;
    uStack_1b0 = uStack_130;
    uStack_1ac = uStack_12c;
    local_70 = &local_e8;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1b8);
    local_68 = local_d8;
    local_1b8 = (undefined4)local_158;
    uStack_1b4 = local_158._4_4_;
    uStack_1b0 = uStack_150;
    uStack_1ac = uStack_14c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1b8);
    local_60 = local_c8;
    local_1b8 = (undefined4)local_148;
    uStack_1b4 = local_148._4_4_;
    uStack_1b0 = uStack_140;
    uStack_1ac = uStack_13c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_58 = local_b8;
    uVar3 = CONCAT44(uVar11,DAT_141a0a0d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar3,&local_78);
    uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar6);
    }
    uStack_1ac = 7;
    local_1b8 = 10;
    FUN_140042560(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = (undefined4)local_1a8;
    uStack_1b4 = local_1a8._4_4_;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_50 = local_a8;
    local_1b8 = (undefined4)local_128;
    uStack_1b4 = local_128._4_4_;
    uStack_1b0 = uStack_120;
    uStack_1ac = uStack_11c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1b8);
    local_48 = local_98;
    uVar3 = CONCAT44(uVar11,DAT_1419fd6d8);
    puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,5,uVar3,&local_70);
    uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar4 != local_88) {
      local_1b8 = *puVar4;
      uStack_1b4 = puVar4[1];
      uStack_1b0 = puVar4[2];
      uStack_1ac = puVar4[3];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_1b8);
    }
    local_40 = local_88;
    FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar11,DAT_1419fe568),&local_48);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

