// gml_Script__collide_anon_4599_anon_621_gml_Object_oBloodDropManager_Create_0 @ 0x1406b29f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__collide_anon_4599_anon_621_gml_Object_oBloodDropManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Script__instance_place@anon@4336@anon@621@gml_Object_oBloodDropManager_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xc4;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_dc = 0;
  local_e8 = 0x4000000000000000;
  local_68 = 0xc6;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1406b2aca:
    local_108 = *(undefined4 *)puVar1;
    uStack_104 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_100 = *(undefined4 *)(puVar1 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_108);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_d8) goto LAB_1406b2aca;
  }
  local_60 = &local_d8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_c8) goto LAB_1406b2b4b;
  }
  local_108 = *(undefined4 *)puVar1;
  uStack_104 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_100 = *(undefined4 *)(puVar1 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_108);
LAB_1406b2b4b:
  local_58 = &local_c8;
  local_50 = &local_e8;
  if ((param_4 < 3) || (puVar2 = (undefined8 *)param_5[2], puVar2 != &local_a8)) {
    local_108 = *(undefined4 *)puVar2;
    uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  local_48 = &local_a8;
  local_108 = _DAT_1419df7a0;
  uStack_104 = uRam00000001419df7a4;
  uStack_100 = uRam00000001419df7a8;
  uStack_fc = uRam00000001419df7ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_40 = local_98;
  local_108 = _DAT_1419df7c0;
  uStack_104 = uRam00000001419df7c4;
  uStack_100 = uRam00000001419df7c8;
  uStack_fc = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_38 = local_88;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,6,CONCAT44(uVar3,DAT_1419f5d98),&local_60);
  if (puVar2 != param_3) {
    local_108 = *(undefined4 *)puVar2;
    uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

