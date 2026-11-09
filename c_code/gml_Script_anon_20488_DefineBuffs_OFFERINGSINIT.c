// gml_Script_anon_20488_DefineBuffs_OFFERINGSINIT @ 0x1403d9a10

undefined8 *
gml_Script_anon_20488_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_70 = "gml_Script_anon@19236@DefineBuffs@OFFERINGSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x31a;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x31b;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_cc = 0;
  local_d8 = 0x3f8eb851eb851eb8;
  FUN_140042560(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_8c = local_bc;
  uStack_90 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_98 = local_c8;
  }
  else {
    FUN_1400419b0(&local_98,&local_c8);
  }
  uStack_cc = 7;
  local_d8 = CONCAT44(local_d8._4_4_,100);
  FUN_140042560(&local_98,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = local_98;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_d8);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_68 = 0x31d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_60 = &local_88;
  uVar2 = CONCAT44(uVar3,DAT_141a08838);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar2,&local_60);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_40) {
    local_d8 = *puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_d8);
  }
  local_58 = &local_40;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar3,DAT_1419fcb18),&local_58);
  if (puVar1 != param_3) {
    local_d8 = *puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

