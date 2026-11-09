// gml_Script_map_value @ 0x1404342e0

undefined8 *
gml_Script_map_value
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong local_b8;
  uint local_ac;
  ulonglong local_a8;
  undefined4 local_a0;
  uint local_9c;
  ulonglong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script__grad@anon@2291@perlin_noise@PerlinFunc";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x2d;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e4a8b0(puVar6);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 10;
  local_48 = 0x2e;
  uStack_6c = 0;
  local_78 = 0x4020000000000000;
  local_98 = (ulonglong)(uVar3 & 0xf);
  iVar4 = FUN_140e851f0(&local_98,&local_78,DAT_141955260,1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    if (param_4 < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (ulonglong *)param_5[2];
    }
    uStack_7c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_80 = (int)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_88);
    }
    puVar7 = &local_88;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (ulonglong *)param_5[1];
    }
    uStack_6c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_70 = (int)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_78);
    }
    puVar7 = &local_78;
    bVar2 = true;
    bVar1 = false;
  }
  local_68 = (undefined4)*puVar7;
  uStack_64 = *(uint *)((longlong)puVar7 + 4);
  uStack_60 = (undefined4)puVar7[1];
  uStack_5c = *(uint *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_68);
  if ((bVar1) && ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_88);
  }
  if ((bVar2) && ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x2f;
  uStack_6c = 0;
  local_78 = 0x4010000000000000;
  iVar4 = FUN_140e851f0(&local_98,&local_78,DAT_141955260,1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    local_48 = 0x31;
    uStack_6c = 0;
    local_78 = 0x4028000000000000;
    iVar4 = FUN_140e851f0(&local_98,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar4 != 0) {
      uStack_6c = 0;
      local_78 = 0x402c000000000000;
      iVar4 = FUN_140e851f0(&local_98,&local_78,DAT_141955260,0);
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (iVar4 != 0) {
        local_48 = 0x34;
        if (3 < param_4) {
          puVar8 = (ulonglong *)param_5[3];
          goto LAB_14043464b;
        }
        goto LAB_140434654;
      }
    }
    local_48 = 0x32;
    if (1 < param_4) {
      puVar8 = (ulonglong *)param_5[1];
      goto LAB_14043464b;
    }
  }
  else {
    local_48 = 0x30;
    if (2 < param_4) {
      puVar8 = (ulonglong *)param_5[2];
LAB_14043464b:
      if (puVar8 == &local_b8) goto LAB_14043467f;
    }
  }
LAB_140434654:
  local_68 = (undefined4)*puVar8;
  uStack_64 = *(uint *)((longlong)puVar8 + 4);
  uStack_60 = (undefined4)puVar8[1];
  uStack_5c = *(uint *)((longlong)puVar8 + 0xc);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_68);
LAB_14043467f:
  local_48 = 0x36;
  uVar5 = FUN_140e4a8b0(&local_98);
  if ((uVar5 & 1) != 0) {
    local_48 = 0x37;
    uVar5 = local_a8;
    if ((local_9c & 0xffffff) != 0) {
      uVar5 = FUN_140e4b060(&local_a8);
    }
    local_68 = (undefined4)uVar5;
    local_78 = uVar5 ^ 0x8000000000000000;
    uStack_6c = 0;
    uStack_64 = (uint)(uVar5 >> 0x20) ^ 0x80000000;
    uStack_60 = uStack_70;
    uStack_5c = 0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_68);
  }
  local_48 = 0x39;
  uVar5 = FUN_140e4a8b0(&local_98);
  if ((uVar5 & 2) != 0) {
    local_48 = 0x3a;
    uVar5 = local_b8;
    if ((local_ac & 0xffffff) != 0) {
      uVar5 = FUN_140e4b060(&local_b8);
    }
    local_68 = (undefined4)uVar5;
    local_78 = uVar5 ^ 0x8000000000000000;
    uStack_6c = 0;
    uStack_64 = (uint)(uVar5 >> 0x20) ^ 0x80000000;
    uStack_60 = uStack_70;
    uStack_5c = 0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_68);
  }
  local_48 = 0x3c;
  uStack_7c = local_9c;
  uStack_80 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_88 = local_a8;
  }
  else {
    FUN_1400419b0(&local_88,&local_a8);
  }
  FUN_1400460e0(&local_88,&local_b8);
  if (&local_88 != param_3) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

