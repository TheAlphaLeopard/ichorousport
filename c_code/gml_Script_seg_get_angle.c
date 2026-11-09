// gml_Script_seg_get_angle @ 0x14049a510

longlong *
gml_Script_seg_get_angle
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_seg_exists";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 4;
  bVar5 = false;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  local_5c = 0;
  uVar6 = 0;
  local_68 = 0;
  iVar1 = FUN_140e851f0(puVar3,&local_68,DAT_141955260,1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (0 < iVar1) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    if (0 < param_4) {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar1 = FUN_140e851f0(puVar4,uVar2,DAT_141955260,1);
    if (iVar1 == -2) {
      bVar5 = false;
    }
    else {
      bVar5 = iVar1 < 0;
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar5) {
    uVar6 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar6 << 0x20;
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

