// gml_Script_anon_5425____struct___629_gml_Object_oPlayer_Create_0 @ 0x140bf06a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5425____struct___629_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_a0 = "gml_Script_anon@5221@___struct___628@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x125;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x127;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7f48);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar1,0);
  local_98 = 0x128;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef8c8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef9e8);
  local_d8 = (longlong *)CONCAT44(uRam00000001419ecc44,_DAT_1419ecc40);
  uStack_d0 = uRam00000001419ecc48;
  uStack_cc = uRam00000001419ecc4c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_48 = local_78;
  local_d8 = (longlong *)CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_d0 = uRam00000001419ecdb8;
  uStack_cc = uRam00000001419ecdbc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_d8);
  local_40 = local_68;
  if (puVar3 != &local_58) {
    local_d8 = (longlong *)*puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_d8);
  }
  local_38 = &local_58;
  ppuVar4 = &local_48;
  FUN_140e63610(param_1,param_2,&local_e8,3,uVar2,ppuVar4);
  local_98 = 0x129;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0cfc8,0x80000000,&local_88,uVar2 & 0xffffffffffffff00,
                (ulonglong)ppuVar4 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = (longlong *)local_88;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_d8);
  FUN_140e86c30(uVar1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_98 = 0x12a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar3 != &local_c8) {
    local_d8 = (longlong *)*puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar1,DAT_1419f5ef8,0x80000000,&local_c8);
  local_98 = 300;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar1,0);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

