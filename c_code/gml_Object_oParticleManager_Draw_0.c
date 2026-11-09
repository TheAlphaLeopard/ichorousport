// gml_Object_oParticleManager_Draw_0 @ 0x140bc5270

undefined8 *
gml_Object_oParticleManager_Draw_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  double local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@3964@gml_Object_oParticleManager_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x103;
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6e48);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar2 + 0xc) == 2) && (*plVar2 != 0)) {
    iVar5 = *(int *)(*plVar2 + 0x24);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = (double)iVar5;
  local_28 = 0x104;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6e48);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e4a740(&local_58);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar3,uVar1);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (param_5 != puVar4) {
    local_48 = *param_5;
    uStack_40 = param_5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_48);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

