// gml_Object_oEntity_Draw_0 @ 0x140ac6de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEntity_Draw_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Object_oEntity_Alarm_8";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419eef98);
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_78 = 4;
  uStack_19c = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a1f580,0x80000000,&local_98,uVar7,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = (longlong *)local_98;
  uStack_1a0 = uStack_90;
  uStack_19c = uStack_8c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1a8);
  local_68 = &local_118;
  uVar4 = CONCAT44(uVar8,DAT_1419eecb8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar4,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_168) {
    local_1a8 = (longlong *)*puVar3;
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1a8);
  }
  local_78 = 6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (puVar2 != &local_118) {
    local_1a8 = (longlong *)*puVar2;
    uStack_1a0 = *(undefined4 *)(puVar2 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  local_68 = &local_118;
  local_60 = &local_168;
  ppuVar9 = &local_68;
  uVar7 = CONCAT44(uVar8,DAT_141a01138);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_198,2,uVar7,ppuVar9);
  iVar1 = FUN_140e851f0(uVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 8;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09728);
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_148);
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419fe5d8,0x80000000,&local_128,uVar7,uVar10);
    FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_158);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419fe5c8,0x80000000,&local_138,uVar7,uVar10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    local_1a8 = (longlong *)CONCAT44(uRam0000000141dc7004,_DAT_141dc7000);
    uStack_1a0 = uRam0000000141dc7008;
    uStack_19c = uRam0000000141dc700c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1a8);
    local_58 = local_f8;
    local_1a8 = (longlong *)CONCAT44(uRam0000000141dc7004,_DAT_141dc7000);
    uStack_1a0 = uRam0000000141dc7008;
    uStack_19c = uRam0000000141dc700c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1a8);
    local_50 = local_e8;
    uStack_19c = local_13c;
    uStack_1a0 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)local_148;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_148);
    }
    FUN_140046500(&local_1a8,&local_128);
    local_178 = (undefined4)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = uStack_1a0;
    uStack_16c = uStack_19c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = local_14c;
    uStack_1a0 = local_150;
    local_48 = local_d8;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)local_158;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_158);
    }
    FUN_140046500(&local_1a8,&local_138);
    local_178 = (undefined4)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = uStack_1a0;
    uStack_16c = uStack_19c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_40 = local_c8;
    local_178 = (undefined4)local_128;
    uStack_174 = local_128._4_4_;
    uStack_170 = uStack_120;
    uStack_16c = uStack_11c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_178);
    local_38 = local_b8;
    local_178 = (undefined4)local_138;
    uStack_174 = local_138._4_4_;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_178);
    local_30 = local_a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_188,6,CONCAT44(uVar8,DAT_1419f2898),&local_58);
    FUN_140e98ef0(param_1,param_2,puVar2,&local_168,uVar4);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_78 = 0xb;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (puVar2 != &local_118) {
      local_178 = *(undefined4 *)puVar2;
      uStack_174 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_170 = *(undefined4 *)(puVar2 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    local_68 = &local_118;
    local_60 = &local_168;
    uVar4 = CONCAT44(uVar8,DAT_141a01138);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar4,&local_68);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar5 != local_f8) {
      local_178 = *puVar5;
      uStack_174 = puVar5[1];
      uStack_170 = puVar5[2];
      uStack_16c = puVar5[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_178);
    }
    local_58 = local_f8;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x100000000000149;
    local_178 = 0x149;
    uStack_174 = 0x1000000;
    uStack_170 = uStack_1a0;
    uStack_16c = 0xf;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_50 = local_e8;
    local_178 = _DAT_1419df7a0;
    uStack_174 = uRam00000001419df7a4;
    uStack_170 = uRam00000001419df7a8;
    uStack_16c = uRam00000001419df7ac;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    local_48 = local_d8;
    FUN_140e634e0(param_1,param_2,&local_198,3,CONCAT44(uVar8,DAT_1419f2928),&local_58);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

