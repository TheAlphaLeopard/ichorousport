// gml_Script_anon_1076_DefineBossAttributes_BOSSMODSINIT @ 0x140236ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1076_DefineBossAttributes_BOSSMODSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  longlong *local_60;
  longlong *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_d0 = "gml_Script_anon@583@DefineBossAttributes@BOSSMODSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x15;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x17;
  plVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar3 = &DAT_1419df7b0;
  }
  else {
    plVar3 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar3 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar3 != &local_a8) {
    local_118 = *plVar3;
    uStack_110 = (undefined4)plVar3[1];
    uStack_10c = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_118);
  }
  local_60 = &local_a8;
  if (0 < param_4) {
    plVar4 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar4 != &local_98) {
    local_118 = *plVar4;
    uStack_110 = (undefined4)plVar4[1];
    uStack_10c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_118);
  }
  local_58 = &local_98;
  local_118 = CONCAT44(uRam0000000141dcdeac,_DAT_141dcdea8);
  uStack_110 = uRam0000000141dcdeb0;
  uStack_10c = DAT_141dcdeb4;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_50 = local_88;
  uStack_10c = 0xf;
  local_118 = 0x1000000000000e0;
  local_e8 = 0xe0;
  uStack_e4 = 0x1000000;
  uStack_e0 = uStack_110;
  uStack_dc = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_48 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar5,DAT_141a0a7c8),&local_60);
  uVar5 = 0xffffff;
  if (puVar2 != &local_108) {
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    FUN_140041b80(&local_108,&local_e8);
    uVar5 = local_fc;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

