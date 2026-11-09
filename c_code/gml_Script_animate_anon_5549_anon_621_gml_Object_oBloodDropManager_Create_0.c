// gml_Script_animate_anon_5549_anon_621_gml_Object_oBloodDropManager_Create_0 @ 0x1406b2cf0

longlong *
gml_Script_animate_anon_5549_anon_621_gml_Object_oBloodDropManager_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [48];
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_e0 = "gml_Script__place_meeting@anon@4469@anon@621@gml_Object_oBloodDropManager_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 200;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  uVar5 = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xc9;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03298);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1406b2dd1:
    local_108 = *puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_98) goto LAB_1406b2dd1;
  }
  local_50 = &local_98;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_88) goto LAB_1406b2e4a;
  }
  local_108 = *puVar3;
  uStack_100 = *(undefined4 *)(puVar3 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_108);
LAB_1406b2e4a:
  local_48 = &local_88;
  if ((param_4 < 3) || (puVar4 = (undefined8 *)param_5[2], puVar4 != &local_78)) {
    local_108 = *puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_108);
  }
  local_40 = &local_78;
  uVar2 = FUN_140e63610(param_1,param_2,&local_f8,3,uVar2,&local_50);
  uStack_fc = 0;
  local_108 = 0xc010000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 != 0) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

