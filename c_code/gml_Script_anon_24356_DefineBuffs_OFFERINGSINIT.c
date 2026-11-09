// gml_Script_anon_24356_DefineBuffs_OFFERINGSINIT @ 0x1403e0ca0

undefined8 *
gml_Script_anon_24356_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  byte local_34;
  
  local_70 = "gml_Script_anon@23387@DefineBuffs@OFFERINGSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x3da;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x3dc;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_1403e0d9b;
  }
  local_a8 = *(undefined4 *)param_5;
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_a0 = *(undefined4 *)(param_5 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_a8);
LAB_1403e0d9b:
  local_58 = &local_40;
  uVar2 = CONCAT44(uVar3,DAT_141a08838);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar2,&local_58);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_8c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_90 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_98,puVar1);
  }
  uStack_9c = 7;
  local_a8 = 2;
  FUN_1400460e0(&local_98,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = uStack_90;
  uStack_9c = uStack_8c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_a8);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_68 = 0x3de;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_60 = &local_88;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar3,DAT_1419fcb18),&local_60);
  if (puVar1 != param_3) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

