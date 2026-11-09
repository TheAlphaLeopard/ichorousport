// gml_GlobalScript___InputVibrateClassGamepad @ 0x1400e5ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_GlobalScript___InputVibrateClassGamepad(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 *local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  int local_84;
  
  local_120 = "gml_Script___Update@anon@431@__InputVibrateClassCurve@__InputVibrateClassCurve";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x11;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = (undefined8 *)0x0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x13;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02708);
  FUN_140e85f80(param_1,DAT_141a02be8,0x80000000,&local_a0);
  local_e4 = local_94;
  local_e8 = local_98;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
    local_f0 = local_a0;
  }
  else {
    FUN_1400419b0(&local_f0,&local_a0);
  }
  uStack_17c = 0;
  local_188 = (undefined1 *)0x408f400000000000;
  FUN_140046500(&local_f0,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_1400460e0(uVar3,&local_f0);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_118 = 0x14;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02708);
  local_f0 = puVar4;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a041d8);
  uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_180 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (undefined1 *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_188,puVar4);
  }
  FUN_140046500(&local_188,uVar3);
  uStack_190 = CONCAT44(uStack_17c,uStack_180);
  local_198 = local_188;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_118 = 0x16;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04218);
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a04238,0x80000000,&local_90,uVar10,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  iVar1 = 0;
  if ((local_84 == 2) && (local_90 != 0)) {
    iVar1 = *(int *)(local_90 + 0x24);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = (double)iVar1;
  local_118 = 0x17;
  uStack_17c = 0;
  uVar8 = 0x3ff00000;
  local_188 = (undefined1 *)0x3ff0000000000000;
  iVar1 = FUN_140e851f0(&local_b0,&local_188,DAT_141955260,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uVar2 = 1 << ((byte)local_19c & 0x1f);
  if (iVar1 == 0) {
    local_118 = 0x19;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04218);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
    if (puVar4 != &local_168) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_110 = &local_168;
    local_198 = _DAT_141dc6150;
    uStack_190 = uRam0000000141dc6158;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
    local_108 = &local_158;
    uVar5 = CONCAT44(uVar11,DAT_141a04248);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar5,&local_110);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_148) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    local_100 = &local_148;
    local_f8 = &local_c0;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar11,DAT_141a04258),&local_100);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar5 = *puVar4;
    }
    else {
      uVar5 = FUN_140e4b060(puVar4);
    }
    uVar5 = FUN_140e78ec0(uVar5,0,0x3ff0000000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = uVar5;
    local_118 = 0x1a;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a041a8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
    FUN_140e609c0(param_1);
    if (puVar4 != puVar6) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_198);
    }
    FUN_140e60910(1);
  }
  else {
    local_118 = 0x1e;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04218);
    if (puVar4 != &local_168) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_110 = &local_168;
    local_198 = _DAT_141dc6150;
    uStack_190 = uRam0000000141dc6158;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
    local_108 = &local_158;
    if (puVar4 != &local_148) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    local_100 = &local_148;
    uVar5 = CONCAT44(uVar11,DAT_141a04248);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar5,&local_110);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_138) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    local_f8 = &local_138;
    uVar5 = CONCAT44(uVar11,DAT_141a04248);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar5,&local_100);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_d0) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_198);
    }
    local_118 = 0x1f;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04218);
    if (puVar4 != &local_168) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_110 = &local_168;
    local_198 = _DAT_1419e1cb0;
    uStack_190 = uRam00000001419e1cb8;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
    local_108 = &local_158;
    if (puVar4 != &local_148) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    local_100 = &local_148;
    uVar5 = CONCAT44(uVar11,DAT_141a04248);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar5,&local_110);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_138) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    local_f8 = &local_138;
    uVar5 = CONCAT44(uVar11,DAT_141a04248);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar5,&local_100);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_e0) {
      local_198 = (undefined1 *)*puVar4;
      uStack_190 = puVar4[1];
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_198);
    }
    local_118 = 0x21;
    uStack_17c = 0;
    local_188 = &DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(&local_d0,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar1 != 0) {
      local_118 = 0x21;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
      local_110 = &local_d0;
      local_108 = &local_c0;
      uVar5 = CONCAT44(uVar11,DAT_141a04258);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar5,&local_110);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = FUN_140e4b060(puVar6);
      }
      uVar5 = FUN_140e78ec0(uVar5,0,0x3ff0000000000000);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = uVar5;
    }
    local_118 = 0x22;
    uStack_17c = 0;
    local_188 = &DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(&local_e0,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar1 != 0) {
      local_118 = 0x22;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
      local_110 = &local_e0;
      local_108 = &local_c0;
      puVar6 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar11,DAT_141a04258),&local_110)
      ;
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = FUN_140e4b060(puVar6);
      }
      uVar5 = FUN_140e78ec0(uVar5,0,0x3ff0000000000000);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = uVar5;
    }
  }
  local_118 = 0x25;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04178);
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
  FUN_140e609c0(param_1);
  FUN_140042560(uVar7,uVar5);
  FUN_140e60910(1);
  local_118 = 0x26;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04138);
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
  FUN_140e609c0(param_1);
  FUN_140042560(uVar7,uVar5);
  FUN_140e60910(1);
  local_118 = 0x28;
  iVar1 = FUN_140e851f0(local_f0,uVar3,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == -2 || -1 < iVar1) {
    uVar8 = 0;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

