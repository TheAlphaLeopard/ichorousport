// gml_GlobalScript_collision_line_width @ 0x14025dcb0

undefined8 *
gml_GlobalScript_collision_line_width
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script_choose_weighted";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_8c = 0;
  local_98 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 4;
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  bVar1 = true;
  puVar5 = &DAT_1419df7b0;
  while( true ) {
    if (!bVar1) {
      local_68 = 4;
      FUN_140162d40(&local_c8,2);
    }
    bVar1 = false;
    iVar2 = FUN_140e851f0(&local_c8,&local_98,DAT_141955260,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_68 = 5;
    iVar2 = FUN_140e4a740(&local_c8);
    if (iVar2 < param_4) {
      puVar4 = (undefined8 *)param_5[iVar2];
    }
    else {
      puVar4 = &DAT_1419df7b0;
    }
    local_9c = 0;
    local_a8 = 0;
    iVar2 = FUN_140e851f0(puVar4,&local_a8,DAT_141955260,1);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (iVar2 == -2 || 0 < iVar2) {
      local_68 = 6;
      iVar2 = FUN_140e4a740(&local_c8);
      if (iVar2 < param_4) {
        FUN_1400460e0(&local_b8,param_5[iVar2]);
      }
      else {
        FUN_1400460e0(&local_b8,&DAT_1419df7b0);
      }
    }
    else {
      local_68 = 5;
    }
  }
  local_68 = 9;
  uVar3 = FUN_140e4a8b0(&local_b8);
  uVar3 = FUN_140e78f00(uVar3);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_68 = 10;
  local_b8 = uVar3;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  bVar1 = true;
  do {
    while( true ) {
      if (!bVar1) {
        local_68 = 10;
        FUN_140162d40(&local_c8,2);
      }
      bVar1 = false;
      iVar2 = FUN_140e851f0(&local_c8,&local_98,DAT_141955260,1);
      if ((iVar2 == -2) || (-1 < iVar2)) {
        local_68 = 0x10;
        if (0 < param_4) {
          puVar5 = (undefined8 *)*param_5;
        }
        if (puVar5 != param_3) {
          local_88 = *puVar5;
          uStack_80 = puVar5[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_88);
        }
        goto LAB_14025e119;
      }
      local_68 = 0xb;
      iVar2 = FUN_140e4a740(&local_c8);
      if (iVar2 < param_4) {
        puVar4 = (undefined8 *)param_5[iVar2];
      }
      else {
        puVar4 = &DAT_1419df7b0;
      }
      local_9c = 0;
      local_a8 = 0;
      iVar2 = FUN_140e851f0(puVar4,&local_a8,DAT_141955260,1);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if (iVar2 == -2 || 0 < iVar2) break;
      local_68 = 0xb;
    }
    local_68 = 0xc;
    iVar2 = FUN_140e4a740(&local_c8);
    if (iVar2 < param_4) {
      puVar4 = (undefined8 *)param_5[iVar2];
    }
    else {
      puVar4 = &DAT_1419df7b0;
    }
    FUN_1400462a0(&local_b8,puVar4);
    local_68 = 0xd;
    uStack_80 = uStack_80 & 0xffffffff;
    local_88 = 0;
    iVar2 = FUN_140e851f0(&local_b8,&local_88,DAT_141955260,1);
    if ((1 << ((byte)(uStack_80 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  } while (iVar2 == -2 || -1 < iVar2);
  local_68 = 0xd;
  local_9c = local_bc;
  local_a0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_a8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_c8);
  }
  uStack_80 = CONCAT44(7,(undefined4)uStack_80);
  local_88 = CONCAT44(local_88._4_4_,1);
  FUN_1400462a0(&local_a8,&local_88);
  if ((1 << ((byte)(uStack_80 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  iVar2 = FUN_140e4a740(&local_a8);
  if (iVar2 < param_4) {
    puVar5 = (undefined8 *)param_5[iVar2];
  }
  if (puVar5 != param_3) {
    local_88 = *puVar5;
    uStack_80 = puVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
LAB_14025e119:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

