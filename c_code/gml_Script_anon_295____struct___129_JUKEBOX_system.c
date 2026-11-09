// gml_Script_anon_295____struct___129_JUKEBOX_system @ 0x1403916d0

longlong *
gml_Script_anon_295____struct___129_JUKEBOX_system
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_IsBetween";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 1;
  FUN_140041df0(local_68,param_4,4,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 1;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[3];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  uVar9 = 0x3ff00000;
  if (iVar2 == 0) {
    local_38 = 1;
    uStack_6c = 0xd;
    local_78 = 0x3ff0000000000000;
    if ((int)local_68[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_60[3];
      if (&local_78 == puVar5) goto LAB_1403917e9;
    }
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_70;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
LAB_1403917e9:
  local_38 = 3;
  bVar8 = false;
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
  }
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  uVar3 = FUN_140e851f0(puVar4,puVar5,DAT_141955260,1);
  if (uVar3 < 0x80000000) {
    if ((int)local_68[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_60[2];
    }
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    iVar2 = FUN_140e851f0(puVar4,puVar5,DAT_141955260,1);
    if (iVar2 != -2 && iVar2 < 1) {
      if ((int)local_68[0] < 4) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_60[3];
      }
      cVar1 = FUN_140e491e0(puVar5);
      if (cVar1 != '\0') {
        bVar8 = true;
        goto LAB_1403918df;
      }
    }
    if ((int)local_68[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_60[2];
    }
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    iVar2 = FUN_140e851f0(puVar4,puVar5,DAT_141955260,1);
    if (iVar2 != -2 && iVar2 < 0) {
      if (3 < (int)local_68[0]) {
        puVar6 = (undefined8 *)local_60[3];
      }
      cVar1 = FUN_140e491e0(puVar6);
      bVar8 = cVar1 == '\0';
    }
  }
LAB_1403918df:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (!bVar8) {
    uVar9 = 0;
  }
  *param_3 = (ulonglong)uVar9 << 0x20;
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

