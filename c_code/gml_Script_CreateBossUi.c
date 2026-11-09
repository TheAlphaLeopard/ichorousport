// gml_Script_CreateBossUi @ 0x140265610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_CreateBossUi
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar5;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_100 = "gml_Script_create_textbox";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 3;
  uVar5 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 5;
  local_128 = CONCAT44(uRam0000000141dc6384,_DAT_141dc6380);
  uStack_120 = uRam0000000141dc6388;
  uStack_11c = uRam0000000141dc638c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_60 = local_c8;
  local_128 = CONCAT44(uRam0000000141dc6384,_DAT_141dc6380);
  uStack_120 = uRam0000000141dc6388;
  uStack_11c = uRam0000000141dc638c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_58 = local_b8;
  local_128 = CONCAT44(uRam0000000141dce0dc,_DAT_141dce0d8);
  uStack_120 = uRam0000000141dce0e0;
  uStack_11c = DAT_141dce0e4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_50 = local_a8;
  uStack_11c = 0xf;
  local_128 = 0x10000000000007e;
  local_118 = 0x7e;
  uStack_114 = 0x1000000;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_48 = local_98;
  puVar3 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_f0,4,CONCAT44(uVar5,DAT_141a0a7c8),&local_60)
  ;
  if (puVar3 != &local_138) {
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_118);
  }
  local_f8 = 6;
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_138);
  if (0 < iVar2) {
    do {
      local_f8 = 8;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a8a8);
      FUN_140e609c0(local_res8);
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*param_5;
      }
      if (puVar4 != puVar3) {
        local_118 = *(undefined4 *)puVar4;
        uStack_114 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_110 = *(undefined4 *)(puVar4 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_118);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  local_f8 = 0xc;
  if (&local_138 != param_3) {
    local_118 = (undefined4)local_138;
    uStack_114 = local_138._4_4_;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

