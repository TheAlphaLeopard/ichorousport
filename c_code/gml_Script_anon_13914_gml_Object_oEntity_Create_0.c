// gml_Script_anon_13914_gml_Object_oEntity_Create_0 @ 0x140aba860

longlong *
gml_Script_anon_13914_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@13741@gml_Object_oEntity_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x284;
  FUN_140041df0(local_68,param_4,1,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x284;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 0x284;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a11ee8);
    if ((int)local_68[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_60;
    }
    if (puVar3 != puVar6) {
      local_58 = *(undefined4 *)puVar3;
      uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_50 = *(undefined4 *)(puVar3 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_58);
    }
  }
  local_38 = 0x285;
  bVar9 = false;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f62a8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff3b8);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a120c8);
    iVar2 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,1);
    if ((iVar2 == -2) || (-1 < iVar2)) goto LAB_140abaa07;
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57420);
  if (0 < (int)local_68[0]) {
    puVar7 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(uVar4,puVar7,DAT_141955260,1);
  if (iVar2 != -2) {
    bVar9 = -1 < iVar2;
  }
LAB_140abaa07:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar9) {
    uVar10 = 0x3ff00000;
  }
  else {
    uVar10 = 0;
  }
  *param_3 = (ulonglong)uVar10 << 0x20;
  if (0 < (int)local_68[0]) {
    puVar7 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

