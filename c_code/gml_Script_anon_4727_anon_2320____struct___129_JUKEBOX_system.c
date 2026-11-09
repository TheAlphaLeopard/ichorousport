// gml_Script_anon_4727_anon_2320____struct___129_JUKEBOX_system @ 0x140396650

undefined8 *
gml_Script_anon_4727_anon_2320____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@4438@anon@2320@___struct___129@JUKEBOX_system";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xa0;
  FUN_140041df0(local_58,param_4,1,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xa0;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_28 = 0xa0;
    uStack_5c = 0xd;
    local_68 = 0x3ff0000000000000;
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
      if (&local_68 == puVar2) goto LAB_140396766;
    }
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = uStack_60;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
LAB_140396766:
  local_28 = 0xa1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b78);
  FUN_140e609c0(param_1);
  if (0 < (int)local_58[0]) {
    puVar5 = (undefined8 *)*local_50;
  }
  if (puVar5 != puVar2) {
    local_48 = *(undefined4 *)puVar5;
    uStack_44 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_40 = *(undefined4 *)(puVar5 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0xa2;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

