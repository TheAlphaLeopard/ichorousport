// gml_Script__funcFilter_anon_236___InputBindingScan___InputBindingScan @ 0x140041fc0

undefined8 *
gml_Script__funcFilter_anon_236___InputBindingScan___InputBindingScan
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___InputBindingIsThumbstick";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  FUN_140041df0(local_58,param_4,1,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 7;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 7;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  else {
    local_38 = 9;
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
    }
    if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
      uVar6 = *puVar2;
    }
    else {
      uVar6 = FUN_140e4b060();
    }
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
    }
    uVar6 = FUN_140e78d00(uVar6);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = uVar6;
    local_38 = 10;
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
    }
    local_5c = 0;
    local_68 = 0x40e0022000000000;
    iVar1 = FUN_140e851f0(puVar2,&local_68,DAT_141955260,0);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (iVar1 == 0) {
      bVar5 = true;
    }
    else {
      if ((int)local_58[0] < 1) {
        puVar2 = &DAT_1419df7b0;
      }
      else {
        puVar2 = (undefined8 *)*local_50;
      }
      local_5c = 0;
      local_68 = 0x40e0022000000000;
      iVar1 = FUN_140e851f0(puVar2,&local_68,DAT_141955260,0);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if (iVar1 == 0) {
        bVar5 = true;
      }
      else {
        if ((int)local_58[0] < 1) {
          puVar2 = &DAT_1419df7b0;
        }
        else {
          puVar2 = (undefined8 *)*local_50;
        }
        local_5c = 0;
        local_68 = 0xc0e0024000000000;
        iVar1 = FUN_140e851f0(puVar2,&local_68,DAT_141955260,0);
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        if (iVar1 == 0) {
          bVar5 = true;
        }
        else {
          if (0 < (int)local_58[0]) {
            puVar3 = (undefined8 *)*local_50;
          }
          local_5c = 0;
          local_68 = 0x40e0024000000000;
          iVar1 = FUN_140e851f0(puVar3,&local_68,DAT_141955260,0);
          bVar5 = iVar1 == 0;
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
        }
      }
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (bVar5) {
      uVar6 = 0x3ff0000000000000;
      goto LAB_140042083;
    }
  }
  uVar6 = 0;
LAB_140042083:
  *param_3 = uVar6;
  if (0 < (int)local_58[0]) {
    puVar3 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

