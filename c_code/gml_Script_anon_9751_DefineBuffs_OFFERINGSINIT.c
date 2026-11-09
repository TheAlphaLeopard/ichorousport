// gml_Script_anon_9751_DefineBuffs_OFFERINGSINIT @ 0x1403ca860

undefined8 *
gml_Script_anon_9751_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar2;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_res20 = 0;
  local_40 = "gml_Script_anon@9384@DefineBuffs@OFFERINGSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x15a;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x15b;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_90 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *param_5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  local_res20 = 1;
  uStack_6c = 7;
  local_78 = CONCAT44(local_78._4_4_,7);
  FUN_140042560(&local_98,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = local_98;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_78);
  local_res20 = 0;
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_38 = 0x15d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_res18 = &local_88;
  uStack_6c = DAT_141dd2614;
  uStack_70 = DAT_141dd2610;
  if ((1 << ((byte)DAT_141dd2614 & 0x1f) & 0x46U) == 0) {
    local_78 = DAT_141dd2608;
  }
  else {
    FUN_1400419b0(&local_78,&DAT_141dd2608);
  }
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar2,DAT_1419fcb18),&local_res18);
  uStack_8c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_90 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_98,puVar1);
  }
  local_res20 = 2;
  FUN_1400460e0(&local_98,&local_78);
  if (&local_98 != param_3) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

