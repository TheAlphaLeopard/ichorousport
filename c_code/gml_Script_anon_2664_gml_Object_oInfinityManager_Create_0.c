// gml_Script_anon_2664_gml_Object_oInfinityManager_Create_0 @ 0x140b301e0

void gml_Script_anon_2664_gml_Object_oInfinityManager_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *local_res18 [2];
  undefined4 uVar4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oInfinityManager_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_38 = 2;
  uStack_6c = 0xf;
  local_78 = 0x100000000000025;
  local_58 = 0x25;
  uStack_54 = 0x1000000;
  uStack_50 = uStack_70;
  uStack_4c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_58);
  local_res18[0] = local_88;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar4,DAT_141a02ef8),local_res18);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a08);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0xc010000000000000;
  }
  else {
    local_38 = 3;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
    uStack_6c = 0xf;
    local_78 = 0x100000000000025;
    FUN_140e87170(&local_78,DAT_141a1f580,0x80000000,&local_98,param_1,param_2);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e609c0(param_1);
    if (&local_98 != puVar3) {
      local_58 = (undefined4)local_98;
      uStack_54 = local_98._4_4_;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

