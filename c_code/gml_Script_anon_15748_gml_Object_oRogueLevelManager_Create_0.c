// gml_Script_anon_15748_gml_Object_oRogueLevelManager_Create_0 @ 0x140ccb120

undefined8 *
gml_Script_anon_15748_gml_Object_oRogueLevelManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_f0 = "gml_Script_anon@14733@gml_Object_oRogueLevelManager_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x267;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_fc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_100 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *param_5;
  }
  else {
    FUN_1400419b0(&local_108);
  }
  local_cc = 0xf;
  local_d8 = 0x1000000000000e6;
  local_b8 = 0xf;
  local_c4 = 0x1000000000000e9;
  local_b4 = 1;
  local_a4 = 0xf;
  local_b0 = 0x1000000000000e8;
  local_a0 = 1;
  local_90 = 0xf;
  local_9c = 0x1000000000000e7;
  local_8c = 1;
  local_7c = 0xf;
  local_88 = 0x1000000000000e5;
  local_78 = 2;
  local_68 = 0xf;
  local_74 = 0x1000000000000e4;
  local_64 = 2;
  local_54 = 0xf;
  local_60 = 0x1000000000000e3;
  local_50 = 2;
  local_40 = 0xf;
  local_4c = 0x100000000000114;
  local_3c = 3;
  local_2c = 0xf;
  local_38 = 0x100000000000118;
  local_28 = 3;
  uVar3 = 0;
  do {
    iVar1 = FUN_140e851f0((longlong)&local_d8 + (longlong)(int)uVar3 * 0x14,&local_108,DAT_141955260
                          ,0);
    if (iVar1 == 0) {
      bVar2 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
      iVar1 = *(int *)((longlong)&local_cc + (longlong)(int)uVar3 * 0x14 + 4);
      if (iVar1 == 0) {
        local_e8 = 0x269;
        if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        puVar4 = (undefined1 *)0x0;
      }
      else if (iVar1 == 1) {
        local_e8 = 0x26c;
        if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        puVar4 = (undefined1 *)0x3ff0000000000000;
      }
      else if (iVar1 == 2) {
        local_e8 = 0x26f;
        if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        puVar4 = (undefined1 *)0x4000000000000000;
      }
      else {
        if (iVar1 != 3) goto LAB_140ccb317;
        local_e8 = 0x271;
        if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        puVar4 = &DAT_bff0000000000000;
      }
      goto LAB_140ccb3d1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 9);
  bVar2 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
LAB_140ccb317:
  local_e8 = 0x273;
  if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  puVar4 = (undefined1 *)0x4008000000000000;
LAB_140ccb3d1:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = puVar4;
  _eh_vector_destructor_iterator_(&local_d8,0x14,9,FUN_1400662d0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

