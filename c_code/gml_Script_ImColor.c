// gml_Script_ImColor @ 0x140294fa0

ulonglong * gml_Script_ImColor(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_Color@anon@733@ImColor@ImGui_Misc";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x20;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58230);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58270);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58220);
  uVar4 = FUN_140e4a8b0(uVar1);
  uVar5 = FUN_140e4a8b0(uVar2);
  lVar6 = FUN_140e4a8b0(uVar3);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = (lVar6 << 8 | uVar5) << 8 | uVar4;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

