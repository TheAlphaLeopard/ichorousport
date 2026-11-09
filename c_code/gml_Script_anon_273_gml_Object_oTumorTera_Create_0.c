// gml_Script_anon_273_gml_Object_oTumorTera_Create_0 @ 0x140df15b0

void gml_Script_anon_273_gml_Object_oTumorTera_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined4 uVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oTumorRoar_CleanUp_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a029f8);
  uStack_3c = 0;
  local_48 = 0xc010000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 != 0) {
    local_28 = 4;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a029f8);
    if (puVar3 != &local_58) {
      local_48 = *puVar3;
      uStack_40 = *(undefined4 *)(puVar3 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_48);
    }
    local_res8 = &local_58;
    FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar4,DAT_141a07788),&local_res8);
    local_28 = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a029f8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0xc010000000000000;
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

