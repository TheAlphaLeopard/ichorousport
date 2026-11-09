// gml_Script_anon_3965_Attribute_OFFERINGSINIT @ 0x1403c2400

undefined8 *
gml_Script_anon_3965_Attribute_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [32];
  undefined8 local_88;
  byte local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_48;
  longlong **local_40;
  undefined8 *local_38;
  
  local_d0 = "gml_Script_anon@3698@Attribute@OFFERINGSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x89;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x8a;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == &local_88) goto LAB_1403c250e;
  }
  local_c0 = *(undefined4 *)puVar4;
  uStack_bc = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_b8 = *(undefined4 *)(puVar4 + 1);
  uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_c0);
LAB_1403c250e:
  local_48 = &local_88;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  local_78 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  local_40 = &local_78;
  if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_68)) {
    local_c0 = *(undefined4 *)puVar5;
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b8 = *(undefined4 *)(puVar5 + 1);
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_c0);
  }
  local_38 = &local_68;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar6,DAT_1419fed78),&local_40);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,1,DAT_1419fcb18,&local_48);
  FUN_140e98ef0(param_1,param_2,uVar1,uVar3,uVar2);
  local_c8 = 0x8b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

