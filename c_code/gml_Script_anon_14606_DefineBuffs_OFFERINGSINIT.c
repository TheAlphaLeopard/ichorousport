// gml_Script_anon_14606_DefineBuffs_OFFERINGSINIT @ 0x1403d02b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_14606_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar9;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_110 = "gml_Script_anon@13141@DefineBuffs@OFFERINGSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x20a;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0;
  local_198 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x20c;
  local_188 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_180 = uRam0000000141dc6558;
  uStack_17c = uRam0000000141dc655c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  local_14c = 0;
  local_158 = 0x4034000000000000;
  local_58 = local_d8;
  FUN_1400462a0(&local_158,puVar5);
  ppuVar10 = &local_58;
  uVar7 = CONCAT44(uVar9,DAT_141a0a0d8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar7,ppuVar10);
  uStack_17c = local_14c;
  uStack_180 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_188 = local_158;
  }
  else {
    FUN_1400419b0(&local_188,&local_158);
  }
  FUN_140042560(&local_188,uVar3);
  local_1a8 = (undefined4)local_188;
  uStack_1a4 = local_188._4_4_;
  uStack_1a0 = uStack_180;
  uStack_19c = uStack_17c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1a8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_108 = 0x210;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6208,0x80000000,&local_78,uVar7,uVar11);
  cVar1 = FUN_140e491e0(&local_78);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_88,uVar7,uVar11);
    iVar2 = FUN_140e851f0(&local_88,&local_128,DAT_141955260,1);
    if ((iVar2 != -2) && (0 < iVar2)) {
      local_108 = 0x212;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f5c28,0x80000000,&local_168,uVar7,uVar11 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar7 >> 0x20);
      local_1a8 = (undefined4)local_168;
      uStack_1a4 = local_168._4_4_;
      uStack_1a0 = uStack_160;
      uStack_19c = uStack_15c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1a8);
      local_68 = local_f8;
      ppuVar10 = &local_68;
      uVar7 = CONCAT44(uVar9,DAT_1419f59e8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar7,ppuVar10);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_108 = 0x213;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_1419f5c28,0x80000000,&local_168,uVar7,
                      (ulonglong)ppuVar10 & 0xffffffffffffff00);
        uVar9 = (undefined4)(uVar7 >> 0x20);
        local_1a8 = (undefined4)local_168;
        uStack_1a4 = local_168._4_4_;
        uStack_1a0 = uStack_160;
        uStack_19c = uStack_15c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1a8);
        local_60 = local_e8;
        ppuVar10 = &local_60;
        uVar7 = CONCAT44(uVar9,DAT_1419f5968);
        FUN_140e634e0(param_1,param_2,&local_178,1,uVar7,ppuVar10);
      }
      local_108 = 0x215;
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
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      if (1 < param_4) {
        puVar6 = (undefined8 *)param_5[1];
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_98,uVar7,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar7 >> 0x20);
      local_1a8 = (undefined4)local_98;
      uStack_1a4 = local_98._4_4_;
      uStack_1a0 = uStack_90;
      uStack_19c = uStack_8c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1a8);
      local_68 = local_f8;
      local_1a8 = _DAT_1419e47d0;
      uStack_1a4 = uRam00000001419e47d4;
      uStack_1a0 = uRam00000001419e47d8;
      uStack_19c = uRam00000001419e47dc;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1a8);
      local_60 = local_e8;
      local_1a8 = _DAT_1419e4830;
      uStack_1a4 = uRam00000001419e4834;
      uStack_1a0 = uRam00000001419e4838;
      uStack_19c = uRam00000001419e483c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1a8);
      local_1a8 = _DAT_1419e47d0;
      uStack_1a4 = uRam00000001419e47d4;
      uStack_1a0 = uRam00000001419e47d8;
      uStack_19c = uRam00000001419e47dc;
      local_58 = local_d8;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1a8);
      local_50 = local_c8;
      FUN_140e645a0(&local_188,gml_Script_anon_13457_anon_13141_DefineBuffs_OFFERINGSINIT,param_1);
      local_1a8 = (undefined4)local_188;
      uStack_1a4 = local_188._4_4_;
      uStack_1a0 = uStack_180;
      uStack_19c = uStack_17c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1a8);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_48 = local_b8;
      uVar8 = CONCAT44(uVar9,DAT_1419fdca8);
      puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar8,&local_68);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (puVar4 != local_a8) {
        local_1a8 = *puVar4;
        uStack_1a4 = puVar4[1];
        uStack_1a0 = puVar4[2];
        uStack_19c = puVar4[3];
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_1a8);
      }
      local_40 = local_a8;
      ppuVar10 = &local_60;
      uVar7 = CONCAT44(uVar9,DAT_141a02df8);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,5,uVar7,ppuVar10);
      if (puVar6 != &local_148) {
        local_1a8 = *(undefined4 *)puVar6;
        uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1a8);
      }
      FUN_140e87930(uVar3,DAT_1419f5c28,0x80000000,&local_148);
      local_108 = 0x21a;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f5c28,0x80000000,&local_168,uVar7,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar7 >> 0x20);
      local_1a8 = (undefined4)local_168;
      uStack_1a4 = local_168._4_4_;
      uStack_1a0 = uStack_160;
      uStack_19c = uStack_15c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1a8);
      local_68 = local_f8;
      FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar9,DAT_141a02f28),&local_68);
      local_108 = 0x21b;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      local_188 = 0x3ff0000000000000;
      uStack_17c = 0xd;
      local_1a8 = 0;
      uStack_1a4 = 0x3ff00000;
      uStack_1a0 = uStack_180;
      uStack_19c = 0xd;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1a8);
      FUN_140e87930(uVar3,DAT_1419f6208,0x80000000,&local_138);
    }
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

