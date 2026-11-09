// gml_Script_anon_269_gml_Object_oWallDistort_Create_0 @ 0x140e2b900

void gml_Script_anon_269_gml_Object_oWallDistort_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40 [3];
  byte local_34;
  undefined4 local_30 [3];
  byte local_24;
  
  local_50 = "gml_Object_oWallCrumble_CleanUp_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03b88);
  if (puVar2 != local_40) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_68);
  }
  local_78 = local_40;
  uVar4 = CONCAT44(uVar5,DAT_141a04798);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_88,1,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_48 = 2;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03b88);
    if (puVar2 != local_30) {
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_30);
      }
      FUN_140041b80(local_30,&local_68);
    }
    local_70 = local_30;
    FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar5,DAT_141a04918),&local_70);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

